#include "String.hpp"

// basically copying this:
// https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/appendix-a-how-to-implement-a-string-type-in-llvm/index.html?highlight=String
// thank you for the code mine now :D

void String :: defaultStringGen () {
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
    ctx.builder->CreateStore(ConstantPointerNull::get(strPtr), buf); // set buffer to null

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
}


void String :: genStringHelper (CompilationContext &ctx) {
    if (didGenHelper) return;
    
    // create struct type    
    str = StructType::create(*ctx.context, {
        Type::getInt8PtrTy(*ctx.context), // actual string buffer
        Type::getInt32Ty(*ctx.context),   // length or num of chars in buffer
        Type::getInt32Ty(*ctx.context),   // max number of characters in buffer
        Type::getInt32Ty(*ctx.context),   // factor; the number of chars to preallocate when growing
    }, "string");

    strPtr = PointerType::get(str, 0);

    // default string gen
    auto startingBlock = ctx.builder->GetInsertBlock();
    defaultStringGen() 
    ctx.builder->SetInsertPoint(startingBlock);

    // string resize    
    ctx.builder->SetInsertPoint(startingBlock);

    didGenHelper = true;
}