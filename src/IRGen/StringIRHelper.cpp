#include "String.hpp"

// basically copying this:
// https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/appendix-a-how-to-implement-a-string-type-in-llvm/index.html?highlight=String
// thank you for the code mine now :D

void String :: defaultStringGen (CompilationContext &ctx) {
    // create string default
    FunctionType *FTCreateDef = FunctionType::get(Type::getVoidTy(*ctx.context), {strPtr}, false);
    Function *FCreateDef = Function::Create(FTCreateDef, Function::ExternalLinkage, "String_Create_Default", ctx.mod.get());
    FCreateDef->args().begin()->setName("this");
    
    // get starting block; prepare to insert stuff into function
    BasicBlock *bb = BasicBlock::Create(*ctx.context, "String_Create_Default", FCreateDef);
    ctx.builder->SetInsertPoint(bb);

    // main create default code
    auto buf = ctx.builder->CreateGEP(
        str,
        FCreateDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(0).codegen(ctx)}
    );
    ctx.builder->CreateStore(ConstantPointerNull::get(strPtr), buf);           // set buffer to null

    auto len = ctx.builder->CreateGEP(
        str,
        FCreateDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(1).codegen(ctx)}
    );
    ctx.builder->CreateStore(*IntExpr(0).codegen(ctx), len);                   // set length to null

    auto maxlen = ctx.builder->CreateGEP(
        str,
        FCreateDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(2).codegen(ctx)}
    );
    ctx.builder->CreateStore(*IntExpr(0).codegen(ctx), maxlen);                 // set maxlen to null

    auto factor = ctx.builder->CreateGEP(
        str,
        FCreateDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(3).codegen(ctx)}
    );
    ctx.builder->CreateStore(*IntExpr(16).codegen(ctx), factor);                 // set factor to null

    ctx.builder->CreateRetVoid();

    stringConstrF = FCreateDef;
}

void String :: stringDelete (CompilationContext &ctx) {

    // create string default
    FunctionType *FTDelete = FunctionType::get(Type::getVoidTy(*ctx.context), {strPtr}, false);
    Function *FCDeleteDef = Function::Create(FTDelete, Function::ExternalLinkage, "String_Delete", ctx.mod.get());
    
    // get starting block; prepare to insert stuff into function
    BasicBlock *bb = BasicBlock::Create(*ctx.context, "String_Delete", FCDeleteDef);
    ctx.builder->SetInsertPoint(bb);

    // load buffer
    auto buf = ctx.builder->CreateGEP(
        str,
        FCDeleteDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(0).codegen(ctx)}
    );
    
    BasicBlock *free_begin = BasicBlock::Create(*ctx.context, "free_begin", FCDeleteDef);
    BasicBlock *free_close = BasicBlock::Create(*ctx.context, "free_close", FCDeleteDef);
    
    auto bufferval = ctx.builder->CreateLoad(Type::getInt8PtrTy(*ctx.context), buf); 

    auto nullResult = ctx.builder->CreateICmpNE(bufferval, ConstantPointerNull::get(Type::getInt8PtrTy(*ctx.context)));

    ctx.builder->CreateCondBr(nullResult, free_begin, free_close);      // if NOT null, then we clear buffer

    ctx.builder->SetInsertPoint(free_begin);
    ctx.builder->CreateCall(ctx.mod->getFunction("free"), {bufferval}); // clear buffer
    ctx.builder->CreateBr(free_close);

    ctx.builder->SetInsertPoint(free_close);
    ctx.builder->CreateRetVoid();

    stringDeleteF = FCDeleteDef;
}

void String :: stringResize (CompilationContext &ctx) {
    FunctionType *FResize = FunctionType::get(Type::getVoidTy(*ctx.context), {strPtr, Type::getInt32Ty(*ctx.context)}, false);
    Function *FResizeDef = Function::Create(FResize, Function::ExternalLinkage, "String_Resize", ctx.mod.get());
    
    // get starting block; prepare to insert stuff into function
    BasicBlock *bb = BasicBlock::Create(*ctx.context, "String_Resize", FResizeDef);
    ctx.builder->SetInsertPoint(bb);       

    // call malloc for new buffer
    auto newBuffer = ctx.builder->CreateCall(ctx.mod->getFunction("malloc"), {FResizeDef->args().begin()+1}, "output"); 

    // load original buffer
    auto buf = ctx.builder->CreateGEP(
        str,
        FResizeDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(0).codegen(ctx)}
    );
    auto bufferval = ctx.builder->CreateLoad(Type::getInt8PtrTy(*ctx.context), buf, "buffer");

    // load length
    auto len = ctx.builder->CreateGEP(
        str,
        FResizeDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(1).codegen(ctx)}
    );
    auto lenVal = ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), len, "length");

    // create condition to see if one size is less than the other
    auto isShorterSize = ctx.builder->CreateICmpSLT(FResizeDef->args().begin()+1, lenVal);
    auto val = ctx.builder->CreateSelect(isShorterSize, FResizeDef->args().begin()+1, lenVal);

    //********* PRINT OUT SHORTER VAL LATER **********//

    // call memcpy to copy original buffer to new buffer
    ctx.builder->CreateCall(ctx.mod->getFunction("memcpy"), {newBuffer, bufferval, val});

    // clear original buffer
    ctx.builder->CreateCall(ctx.mod->getFunction("free"), {bufferval});

    // set buffer to output
    ctx.builder->CreateStore(newBuffer, buf);

    // set max length to value
    auto maxLen = ctx.builder->CreateGEP(
        str,
        FResizeDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(2).codegen(ctx)}
    );
    ctx.builder->CreateStore(FResizeDef->args().begin()+1, maxLen);

    ctx.builder->CreateRetVoid();

    stringResizeF = FResizeDef; 
}

void String :: AddChar  (CompilationContext &ctx) {
    FunctionType *FAddChar = FunctionType::get(Type::getVoidTy(*ctx.context), {strPtr, Type::getInt32Ty(*ctx.context)}, false);
    Function *FAddCharDef = Function::Create(FAddChar, Function::ExternalLinkage, "String_Add_Char", ctx.mod.get());
    
    // get starting block; prepare to insert stuff into function
    BasicBlock *bb = BasicBlock::Create(*ctx.context, "String_Add_Char", FAddCharDef);
    ctx.builder->SetInsertPoint(bb);

    // get length and maxlen

    // load length
    auto len = ctx.builder->CreateGEP(
        str,
        FAddCharDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(1).codegen(ctx)}
    );
    auto lenVal = ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), len, "length");

    // load max len
    auto maxlen = ctx.builder->CreateGEP(
        str,
        FAddCharDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(2).codegen(ctx)}
    );
    auto maxlenVal = ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), maxlen, "maxlen");

    // if the current length and the maxlen is equal, then you might need to increase length
    auto isEq = ctx.builder->CreateICmpEQ(maxlenVal, lenVal);

    // create block
    BasicBlock *grow_begin = BasicBlock::Create(*ctx.context, "grow_begin", FAddCharDef);
    BasicBlock *grow_close = BasicBlock::Create(*ctx.context, "grow_close", FAddCharDef);
    ctx.builder->CreateCondBr(isEq, grow_begin, grow_close);

    // program grow begin (add character)
    ctx.builder->SetInsertPoint(grow_begin);

    // get factor
    auto factor = ctx.builder->CreateGEP(
        str,
        FAddCharDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(3).codegen(ctx)}
    );
    auto factorVal = ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), factor, "factor");

    auto addval = ctx.builder->CreateAdd(factorVal, maxlenVal); // add factor and maxlen
    
    ctx.builder->CreateCall(ctx.mod->getFunction("String_Resize"), { FAddCharDef->args().begin(), addval });

    ctx.builder->CreateBr(grow_close);

    // program grow end (actually add the character)
    ctx.builder->SetInsertPoint(grow_close);

    auto buf = ctx.builder->CreateGEP(
        str,
        FAddCharDef->args().begin(),
        {*IntExpr(0).codegen(ctx), *IntExpr(0).codegen(ctx)}
    );
    auto bufferval = ctx.builder->CreateLoad(Type::getInt8PtrTy(*ctx.context), buf, "buffer");   

    auto lastCharVal = ctx.builder->CreateGEP(
        Type::getInt8Ty(*ctx.context),
        bufferval,
        {lenVal}
    );

    ctx.builder->CreateStore(FAddCharDef->args().begin()+1, lastCharVal);

    auto lengthAdd = ctx.builder->CreateAdd(lenVal, *IntExpr(1).codegen(ctx));
    ctx.builder->CreateStore(lengthAdd, len);

    ctx.builder->CreateRetVoid();
}

void String :: genStringHelper (CompilationContext &ctx) {
    if (didGenHelper) return;
    
    // create struct type    
    str = StructType::create(*ctx.context, {
        Type::getInt8PtrTy(*ctx.context), // actual string buffer
        Type::getInt32Ty(*ctx.context),   // length or num of chars in buffer
        Type::getInt32Ty(*ctx.context),   // max number of characters in buffer
        Type::getInt32Ty(*ctx.context),   // factor; the number of chars to preallocate when growing
    }, "String");

    strPtr = PointerType::get(str, 0);

    // default string gen
    auto startingBlock = ctx.builder->GetInsertBlock();
    defaultStringGen(ctx);
    ctx.builder->SetInsertPoint(startingBlock);

    // string delete    
    ctx.builder->SetInsertPoint(startingBlock);
    stringDelete(ctx);

    // string resize
    ctx.builder->SetInsertPoint(startingBlock);
    stringResize(ctx);

    // add character 
    ctx.builder->SetInsertPoint(startingBlock);
    AddChar(ctx);

    ctx.builder->SetInsertPoint(startingBlock);
    didGenHelper = true;
}