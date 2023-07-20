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
    
    std::vector<Type *> paramTypes;
    vector<string> types;
    for (auto &param : params) {
        auto p = get<0>(param);
        types.push_back(p);
        paramTypes.push_back(ctx.convertToLLVMType(p));
    }

    string newName = ctx.createFunctionName(returnType, name, types, isPrivate); // get function name from scoping

    auto retType = ctx.convertToLLVMType(returnType);

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, newName, ctx.mod.get());

    if (ctx.runningClass != "")
        F->addFnAttr(Attribute::NoUnwind);

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
                auto Alloca = ctx.builder->CreateAlloca(arg.getType(), nullptr, arg.getName().str());
                ctx.builder->CreateStore(&arg, Alloca);
                ctx.createVarName(arg.getName().str(), VariableScope { 
                    get<0>(params[i]), Alloca, ""
                });
            } else if (ctx.runningClass != "") { // method (within class) declaration
                // create GEP instruction
                ctx.thisValue = &arg; // set the this value up for functions methods within functions methods to be called
                auto scope = &ctx.classesDefined.rbegin()->second;
                int indCount = 0;
                for (int v = 0; v < scope->variables.size(); v++) {
                    scope->variableValues.push_back(ctx.builder->CreateGEP(
                        scope->type,
                        &arg,
                        {*IntExpr(0).codegen(ctx), *IntExpr(indCount).codegen(ctx)},
                        scope->name + "_" + scope->variables[v].expr->name
                    ));
                    indCount++;
                }
            } else {
                // just add to variable name
                ctx.createVarName(arg.getName().str(), VariableScope { 
                    get<0>(params[i]), &arg, ""
                });
            }
                
            i += 1;
        }
        (*body)->codegen(ctx);

        ctx.thisValue = nullptr; // reset this value; the function is pretty much done with codegen

        if (!returnType) {
            ctx.builder->CreateRetVoid();
        }
        ctx.builder->SetInsertPoint(block);

        ctx.popFrame();
    }
    verifyFunction(*F);
    return F;
}
