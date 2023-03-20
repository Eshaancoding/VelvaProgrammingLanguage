#include "AST.hpp"

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
        if  (get<0>(param) == "int") {
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
        
        for(auto &arg : F->args()) {
            AllocaInst *Alloca = CreateEntryBlockAlloca(ctx, F, arg.getName().str());
            ctx.builder->CreateStore(&arg, Alloca);
            ctx.createVarName(arg.getName().str(), Variable { "TODO", Alloca});
            // ctx.namedValues[arg.getName().str()] = Alloca;
        }
        (*body)->codegen(ctx);

        if (!returnType) {
            ctx.builder->CreateRetVoid();
        }
        ctx.builder->SetInsertPoint(block);
    }
    verifyFunction(*F);
    return F;
}

std::optional<Value *> CallFuncExpr::codegen(CompilationContext &ctx) {
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
    return ctx.builder->CreateCall(calleeF, argv);
}

