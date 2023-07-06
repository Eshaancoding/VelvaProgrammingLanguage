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
    vector<string> types;
    for (auto &param : params) {
        auto p = get<0>(param);
        types.push_back(p);
        paramTypes.push_back(ctx.convertToLLVMType(p));
    }

    string newName = ctx.createFunctionName(returnType, name, types); // get function name from scoping

    auto retType = ctx.convertToLLVMType(returnType);

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, newName, ctx.mod.get());

    unsigned Idx = 0;
    for (auto &Arg : F->args())
    {
        Arg.setName(get<1>(params[Idx]));
        Idx++;
    }
    if(!isExternal) {
        ctx.pushFrame(true);

        auto block = ctx.builder->GetInsertBlock();
        BasicBlock *bb = BasicBlock::Create(*ctx.context, newName, F);
        ctx.builder->SetInsertPoint(bb);
        
        int i = 0;
        for(auto &arg : F->args()) {
            if (arg.getName().str() != "this") {  
                // just regular allocation for normal argument variables
                AllocaInst *Alloca = CreateEntryBlockAlloca(ctx, F, arg.getName().str());
                ctx.builder->CreateStore(&arg, Alloca);
                ctx.createVarName(arg.getName().str(), VariableScope { 
                    get<0>(params[i]), Alloca
                });
            } else if (ctx.runningClass) {
                // go back until you get class scope
                for (vector<Scope>::reverse_iterator i = ctx.scopes.rbegin(); i != ctx.scopes.rend(); ++i) {
                    // gen values for variables
                    if (i->cls) {
                        size_t indCount = 0;
                        for (auto vtemplate : i->cls->variables) {
                            i->cls->variableValues.push_back(ctx.builder->CreateGEP(
                                i->cls->type, 
                                &arg, 
                                {*IntExpr(0).codegen(ctx), *IntExpr(indCount).codegen(ctx)}, 
                                vtemplate.name
                            ));
                            indCount++;
                        }
                    }

                }
            } else throw invalid_argument("Cannot name 'this' as an argument.");
                
            i += 1;
        }
        (*body)->codegen(ctx);

        if (!returnType) {
            ctx.builder->CreateRetVoid();
        }
        ctx.builder->SetInsertPoint(block);

        ctx.popFrame();
    }
    verifyFunction(*F);
    return F;
}

std::optional<Value *> CallFuncExpr::codegen(CompilationContext &ctx) {
    vector<Value *> argv;
    vector<string> types;

    for (int i = 0; i != params.size(); ++i)
    {
        std::optional<Value*> codeGenParam = params[i]->codegen(ctx);
        if (codeGenParam) {
            argv.push_back(*codeGenParam);
            types.push_back(params[i]->return_type());
        }
        else
            throw invalid_argument("Parameter invalid");
    }   

    FunctionScope func = ctx.findFuncName(functionName, types);
    retType = func.returnType;
    Function *calleeF = ctx.mod->getFunction(func.name);
    return ctx.builder->CreateCall(calleeF, argv);
}

