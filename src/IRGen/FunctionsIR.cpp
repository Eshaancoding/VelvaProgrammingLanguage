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
        paramTypes.push_back(ctx.convertToLLVMType(get<0>(param)));

    auto retType = ctx.convertToLLVMType(returnType);

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
        
        int i = 0;
        for(auto &arg : F->args()) {
            AllocaInst *Alloca = CreateEntryBlockAlloca(ctx, F, arg.getName().str());
            ctx.builder->CreateStore(&arg, Alloca);
            ctx.createVarName(arg.getName().str(), Variable { 
                get<0>(params[i]), Alloca
            });
            // ctx.namedValues[arg.getName().str()] = Alloca;
            i += 1;
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

