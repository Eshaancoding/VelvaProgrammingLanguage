#include "AST.hpp"
#include "llvm/Passes/PassBuilder.h"


optional<Value *> IntExpr::codegen(CompilationContext &ctx)
{
    return ConstantInt::get(*ctx.context, APInt(numBits, num));
}

optional<Value *> FloatExpr::codegen(CompilationContext &ctx)
{
    return ConstantFP::get(*ctx.context, APFloat(decimal));
}

std::optional<Value *> CallFuncExpr::codegen(CompilationContext &ctx)
{
    Function *calleeF = ctx.mod->getFunction(functionName);
    vector<Value *> argv;

    for (int i = 0; i != params.size(); ++i)
    {
        std::optional<Value*> codeGenParam = params[i]->codegen(ctx);
        if (codeGenParam)
            argv.push_back(*codeGenParam);
        else
            return {}; // WE NEED ERROR HANDLING AHHHHHHHHHHHHHHHH
    }
    return ctx.builder->CreateCall(calleeF, argv, "calltmp");
}

// optional<Value *> StringExpr::codegen(CompilationContext &ctx)
// {
//     auto i8 = IntegerType::get(*ctx.context, 8);
//     vector<Constant*> chars(text.size());
//     for(int i = 0; i < text.size(); ++i) {
//         chars[i] = ConstantInt::get(i8, text[i]);
//     }
//     chars.push_back(ConstantInt::get(i8, 0));

//     auto stringType = ArrayType::get(i8, chars.size());

//     auto globalDecl = (GlobalVariable*) ctx.mod->getOrInsertGlobal(".str" + to_string(StringExpr::STR_TOTAL), stringType);
//     globalDecl->setInitializer(ConstantArray::get(stringType, chars));
//     globalDecl->setConstant(true);
//     globalDecl->setLinkage(GlobalValue::LinkageTypes::PrivateLinkage);
//     globalDecl->setUnnamedAddr(GlobalValue::UnnamedAddr::Global);

//     return ConstantExpr::getBitCast(v, i8->getPointerTo());
// }
optional<Value *> StringExpr::codegen(CompilationContext &ctx) {
    // the original function has bugs :/

    // plus, string might be a little bit weird to implement. For example, we might have to redeclare/declare our string
    // See here: https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/appendix-a-how-to-implement-a-string-type-in-llvm/index.html?highlight=string#how-to-implement-a-string-type-in-llvm
    // basically i read a forum and for string literals we declare a pointer to an unnamed global variable, which is what this does
    //  link: https://discourse.llvm.org/t/using-value-to-represent-interger-or-string-type/61968/2

    return ctx.builder->CreateGlobalString(text);
}

static AllocaInst *CreateEntryBlockAlloca(CompilationContext &ctx,
                                        Function *TheFunction,
                                        const std::string &VarName) {
  IRBuilder<> TmpB(&TheFunction->getEntryBlock(),
                   TheFunction->getEntryBlock().begin());
  return TmpB.CreateAlloca(Type::getDoubleTy(*ctx.context), nullptr, VarName);
}

optional<Function *> DeclareFunctionExpr::codegen(CompilationContext &ctx)
{
    // TODO: Later we have to check if the function has already been declared or not, and check if it has an empty body (if not, we give error)

    std::vector<Type *> paramTypes;
    for (auto &param : params)
    {
        if (get<0>(param) == "int") {
            paramTypes.push_back(Type::getInt32Ty(*ctx.context));
        } 
        else if (get<0>(param) == "float") {
            paramTypes.push_back(Type::getFloatTy(*ctx.context));
        } 
        else if (get<0>(param) == "string") {
            paramTypes.push_back(Type::getInt8PtrTy(*ctx.context));
        }
    }


    auto retType = returnType == "int" ? Type::getInt32Ty(*ctx.context)
            : returnType == "float" ? Type::getFloatTy(*ctx.context)
            : returnType == "double" ? Type::getDoubleTy(*ctx.context)
            : returnType == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getVoidTy(*ctx.context);

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, name, ctx.mod.get());

    unsigned Idx = 0;
    for (auto &Arg : F->args())
    {
        Arg.setName(get<1>(params[Idx]));
        Idx++;
    }
    if(!isExternal) {
        auto block = ctx.builder->GetInsertBlock();

        BasicBlock *bb = BasicBlock::Create(*ctx.context, name, F);
        ctx.builder->SetInsertPoint(bb);
        
        // ctx.namedValues.clear() ; // Functions need to be declared before any vars ; we should prob do a scoping thing in the future
        for(auto &arg : F->args()) {

            // Create an alloca for this variable.
            AllocaInst *Alloca = CreateEntryBlockAlloca(ctx, F, arg.getName().str());

            // Store the initial value into the alloca.
            ctx.builder->CreateStore(&arg, Alloca);

            // Add arguments to variable symbol table.
            ctx.namedValues[arg.getName().str()] = Alloca;
        }
        // codegen through all expressions
        (*body)->codegen(ctx);

        if (!returnType) {
            ctx.builder->CreateRetVoid();
        }

        ctx.builder->SetInsertPoint(block);
    }
    verifyFunction(*F);

    

    return F;
}

optional<Value *> VarUseExpr::codegen(CompilationContext &ctx)
{
    auto v = ctx.namedValues[var];
    cout << var;
    return ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), v, var.c_str());
}

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    AllocaInst *inst = ctx.builder->CreateAlloca(/*type == "int" ? Type::getInt32Ty(*ctx.context)
            : type == "double" ? Type::getDoubleTy(*ctx.context)
            : type == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getInt32Ty(*ctx.context)*/ Type::getInt32Ty(*ctx.context),
            0,
            name.c_str());
    ctx.namedValues[name] = inst;
    auto rhs = value->codegen(ctx);
    if (!rhs)
        return {};
    auto s = ctx.builder->CreateStore(*rhs, inst);
    // s->setVolatile(true);
    return s;
};  

optional<Value*> AssignExpr::codegen (CompilationContext &ctx) {
    return ctx.builder->CreateStore(*(value->codegen(ctx)), ctx.namedValues[varName]);
}

optional<Value*> Expr::codegen (CompilationContext &ctx) {
    return nullopt;
}