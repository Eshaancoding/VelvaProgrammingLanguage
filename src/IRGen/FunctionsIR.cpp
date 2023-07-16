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
                AllocaInst *Alloca = CreateEntryBlockAlloca(ctx, F, arg.getName().str());
                ctx.builder->CreateStore(&arg, Alloca);
                ctx.createVarName(arg.getName().str(), VariableScope { 
                    get<0>(params[i]), Alloca, ""
                });
            } else if (ctx.runningClass != "") {
                // create GEP instruction
                ctx.thisValue = &arg; // set the this value up for functions methods within functions methods to be called
                auto scope = &ctx.classesDefined.rbegin()->second;
                int indCount = 0;
                for (int v = 0; v < scope->variables.size(); v++) {
                    scope->variableValues.push_back(ctx.builder->CreateGEP(
                        scope->type,
                        &arg,
                        {*IntExpr(0).codegen(ctx), *IntExpr(indCount).codegen(ctx)},
                        scope->name + "_" + scope->variables[v].name
                    ));
                    indCount++;
                }
            } else throw invalid_argument("Cannot name 'this' as an argument.");
                
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

    if (classVar == "") { // not a class name, just a normal functino call
        try {
            FunctionScope func = ctx.findFuncName(functionName, types);
            retType = func.returnType;
            Function *calleeF = ctx.mod->getFunction(func.name);
            return ctx.builder->CreateCall(calleeF, argv);
        } catch (invalid_argument e) {
            printf("Class function within another function with name: %s\n", functionName.c_str());

            printf("running class: %s and is this value null %d\n", ctx.runningClass.c_str(), ctx.thisValue == nullptr);

            // if that doesn't work, then maybe we are inside a function and we are trying to call there
            if (ctx.runningClass == "") throw e; // if there's no class inside of what we are trying to call, then throw e
            if (ctx.thisValue == nullptr) throw e;

            
            if (ctx.classesDefined.find(ctx.runningClass) != ctx.classesDefined.end()) {
                argv.push_back(ctx.thisValue);
                types.push_back("pt:"+ctx.runningClass);

                FunctionS,cope func = ctx.findFuncName(ctx.runningClass + "_" + functionName, types);
                
                // if not actually create call
                retType = func.returnType;
                Function *calleeF = ctx.mod->getFunction(func.name);
                return ctx.builder->CreateCall(calleeF, argv);
            }

            throw e;
        }
    } 
    else {
        // class func call with a class member. i.e a.move() 
        auto result = ctx.findVarName(classVar);
        if (const VariableScope* v = get_if<VariableScope>(&result)) {
            string className = v->type;
        
            // search through ctx for classes defined
            if (ctx.classesDefined.find(className) != ctx.classesDefined.end()) {
                argv.push_back(v->value);
                types.push_back("pt:"+className);

                FunctionScope func = ctx.findFuncName(className + "_" + functionName, types);
                
                // check if its private
                if (func.isPrivate && ctx.runningClass != className) 
                    throw invalid_argument("Cannot call private method!");
                
                // if not actually create call
                retType = func.returnType;
                Function *calleeF = ctx.mod->getFunction(func.name);
                return ctx.builder->CreateCall(calleeF, argv);
            }

            throw invalid_argument("Invalid class name: " + className);
        }
        else throw invalid_argument("Can't run class member inside classes themselves.");
    }
}

