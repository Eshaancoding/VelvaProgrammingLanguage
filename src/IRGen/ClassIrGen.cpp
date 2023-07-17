#include "AST.hpp"

template <typename T> 
vector<pair<string, T>> filter (vector<string> toDelete, vector<pair<string, T>> v) {
    if (v.size() == 0) return {}; 
    vector<pair<string, T>> d = v;
    for (string del : toDelete)
        for (auto iter = d.begin(); iter != d.end(); iter++) 
            if (iter->first == del) { d.erase(iter); break; }

    return d;
}

optional<Value*> ClassExpr::codegen(CompilationContext &ctx) {
    // get types of all vars 
    // also figure out the number of variables that need to be defined in init
    // in other words find out what arguments are already defined in the overall structure
    vector<pair<string, Value*>> variableDefVal; // programmer provides def val
    vector<pair<string, Value*>> variableDefValProg; // programmer doesn't provide, but there are default values for the data (ex: int)
    vector<pair<string, int>> variablesNotDefVal; // no default val provided nor does programmer provides any
    vector<Type*> varTypes;
    for (int i = 0; i < variables.size(); i++) {
        auto t = ctx.convertToLLVMType(*variables[i].expr->typeArg);
        varTypes.push_back(t);
        
        if (variables[i].expr->value != nullopt) {
            variableDefVal.push_back({variables[i].expr->name, *(*variables[i].expr->value)->codegen(ctx)});
            continue;
        }

        auto defaultValRes = ctx.getDefaultValue(*variables[i].expr->typeArg) ;

        if (defaultValRes != nullopt) 
            variableDefValProg.push_back({variables[i].expr->name, *defaultValRes });
        else
            variablesNotDefVal.push_back({variables[i].expr->name, 0});
    }

    // create struct and pointer type
    StructType* st = StructType::create(*ctx.context, varTypes, className);
    Type* pt = PointerType::get(st, 0);
     
    // add to compilation context
    ctx.createClass(className, st, pt, variables); 
    ctx.runningClass = className;

    printf("class expr!\n");

    // if no constructor exists however there is variable defined 
    if (constructors.size() == 0) {

        printf("no constructor!\n");
        unique_ptr<BlockExpr> b = make_unique<BlockExpr>();

        if (variablesNotDefVal.size() > 0)
            throw invalid_argument("Variable " + variablesNotDefVal[0].first + " not defined in constructor!");

        for (auto i : variableDefVal)
            b->add(make_unique<AssignExpr>(
                i.first,
                i.second
            ));

        for (auto i : variableDefValProg)
            b->add(make_unique<AssignExpr>(
                i.first,
                i.second
            ));


        auto vres = DeclareFunctionExpr(
            false,
            false,
            "constructor_"+className,
            {{"pt:"+className, "this"}}, 
            std::nullopt,
            std::move(b)
        ).codegen(ctx);
    }

    // define constructors
    for (int i = 0; i < constructors.size(); i++) {
        auto c = std::move(constructors[i]);
        c.params.push_back({"pt:"+className, "this"}); // return pointer type

        // go through block expr now and see what variables are declared
        // if not declared, either do default value or value set in equal sign in the original constructor
        vector<string> varsDefined = c.blockExpr->varsDefined();

        // if variable defines default value IN the block expr, then delete it from all of our vectors
        variableDefVal = filter(varsDefined, variableDefVal);
        variableDefValProg = filter(varsDefined, variableDefValProg);
        variablesNotDefVal = filter(varsDefined, variablesNotDefVal);


        if (variablesNotDefVal.size() > 0)
            throw invalid_argument("Variable " + variablesNotDefVal[0].first + " not defined in constructor!");

        // now add to blockExpr expressions to actually add default value or default value by program
        for (auto i : variableDefVal)
            c.blockExpr->add(make_unique<AssignExpr>(
                i.first,
                i.second
            ));

        for (auto i : variableDefValProg)
            c.blockExpr->add(make_unique<AssignExpr>(
                i.first,
                i.second
            ));

        // process declare func expr
        DeclareFunctionExpr(
            false,
            false,
            "constructor_"+className,
            std::move(c.params), 
            std::nullopt,
            std::move(c.blockExpr)
        ).codegen(ctx);
    }

    // define functions
    bool definedConstruct = false;
    for (int i = 0; i < functions.size(); i++) {
        auto f = std::move(functions[i].expr); 
        f->name = className + "_" + f->name;            // functino name
        f->isPrivate = !functions[i].isPublic;          // whether its private or not
        f->params.push_back({"pt:"+className, "this"}); // add pointer type to parameters
        f->codegen(ctx);
    }

    // pop from class frame and reset prev values
    ctx.runningClass = "";

    return nullopt;
}

optional<Value*> ClassVarDecl::codegen (CompilationContext &ctx) {
    if (ctx.classesDefined.find(className) != ctx.classesDefined.end()) {
        auto cscope = ctx.classesDefined[className];

        // found class scope; allocate memory for class
        auto alloc = ctx.builder->CreateAlloca(cscope.type, 0, varName);
        ctx.createVarName(varName, VariableScope { cscope.name, alloc, className });

        // iterate through param types
        vector<Value *> argv;
        vector<string> types;

        for (int i = 0; i != parameters.size(); ++i)
        {
            std::optional<Value*> codeGenParam = parameters[i]->codegen(ctx);
            if (codeGenParam) {
                argv.push_back(*codeGenParam);
                types.push_back(parameters[i]->return_type());
            }
            else
                throw invalid_argument("Parameter invalid");
        }

        // add scope param
        argv.push_back(alloc);
        types.push_back("pt:"+cscope.name);

        // find function init and call it!
        FunctionScope func = ctx.findFuncName("constructor_" + cscope.name, types);
        Function *calleeF = ctx.mod->getFunction(func.name);
        ctx.builder->CreateCall(calleeF, argv);
        return nullopt;
    }
    throw invalid_argument("Class def not found");
}

optional<Value*> ClassVarAssign::codegen (CompilationContext &ctx) {
    // find variable
    auto result = ctx.findVarName(className);
    if (const VariableScope* v = get_if<VariableScope>(&result)) {
        
        auto cscope = ctx.classesDefined[v->llvmStructType];

        int x = 0;
        for (auto var : cscope.variables) {
            if (!var.isPublic) throw invalid_argument("Cannot access variable " + varName + ": variable is private!"); 
            if (var.expr->name == varName) {
                auto gepValue = ctx.builder->CreateGEP(
                    cscope.type,
                    v->value,
                    {*IntExpr(0).codegen(ctx), *IntExpr(x).codegen(ctx)},
                    cscope.name + "_" + varName 
                );

                ctx.builder->CreateStore(*expr->codegen(ctx), gepValue);

                return nullopt;
            }
            x++;
        }
        throw invalid_argument(className + " variable not found.");
    } else throw invalid_argument(className + " variable not found.");
    
    return nullopt;
}