#include "AST.hpp"

std::optional<Value *> CallFuncExpr::codegen(CompilationContext &ctx) {
    vector<Value *> argv;
    vector<string> types;

    // convert types
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

    // check if it is a class 
    try {
        auto cscope = ctx.findClass(functionName); 

        // allocate temp variable for just the scope
        auto alloc = ctx.builder->CreateAlloca(cscope.type);

        argv.push_back(alloc);
        types.push_back("ptr<"+cscope.name+">");

        FunctionScope func = ctx.findFuncName(
            "constructor_" + functionName,
            types 
        );


        Function *calleeF = ctx.mod->getFunction(func.name);
        ctx.builder->CreateCall(calleeF, argv);

        retType = cscope.name;

        return ctx.builder->CreateLoad(cscope.type, alloc);
    } catch (invalid_argument e) {}

    printf("not calss\n");

    // not a class name, just a normal functino call
    if (classVar == "") { 
        try {
            FunctionScope func = ctx.findFuncName(functionName, types);
            retType = func.returnType;
            Function *calleeF = ctx.mod->getFunction(func.name);


            return ctx.builder->CreateCall(calleeF, argv);
        } catch (invalid_argument e) {
            // if that doesn't work, then maybe we are inside a function and we are trying to call there
            if (ctx.runningClass == "") throw e; // if there's no class inside of what we are trying to call, then throw e
            if (ctx.thisValue == nullptr) throw e;

            
            if (ctx.classesDefined.find(ctx.runningClass) != ctx.classesDefined.end()) {
                argv.push_back(ctx.thisValue);
                types.push_back("ptr<"+ctx.runningClass+">");

                FunctionScope func = ctx.findFuncName(ctx.runningClass + "_" + functionName, types);
                
                // if not actually create call
                retType = func.returnType;
                Function *calleeF = ctx.mod->getFunction(func.name);
                return ctx.builder->CreateCall(calleeF, argv);
            }

            throw e;
        }
    } 

    // class func call from a variable. i.e a.move() 
    auto result = ctx.findVarName(classVar);
    if (const VariableScope* v = get_if<VariableScope>(&result)) {
        string className = v->type;
    
        // search through ctx for classes defined
        if (ctx.classesDefined.find(className) != ctx.classesDefined.end()) {
            argv.push_back(v->value);
            types.push_back("ptr<"+className+">");

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

    if (const ClassScope* v = get_if<ClassScope>(&result)) {
        for (int i = 0; i < v->variables.size(); i++) {
            if (v->variables[i].expr->name == classVar && ctx.runningClass != "") {
                argv.push_back(v->variableValues[i]);
                types.push_back("ptr<"+*v->variables[i].expr->typeArg+">");
                FunctionScope func = ctx.findFuncName(*v->variables[i].expr->typeArg + "_" + functionName, types);

                if (func.isPrivate && ctx.runningClass != v->name)
                    throw invalid_argument("Cannot call private method!");

                
                retType = func.returnType;
                Function *calleeF = ctx.mod->getFunction(func.name);
                return ctx.builder->CreateCall(calleeF, argv);
            }
        }
    }
    

    throw invalid_argument("Invalid function call.");


    
}

