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
        auto t = ctx.convertToLLVMType(variables[i].type);
        varTypes.push_back(t);
        variables[i].llvmType = t;
        
        if (variables[i].defaultValue != nullptr)
            variableDefVal.push_back({variables[i].name, *variables[i].defaultValue->codegen(ctx)});
        else if (ctx.getDefaultValue(variables[i].type) != nullopt) 
            variableDefValProg.push_back({variables[i].name, *ctx.getDefaultValue(variables[i].type)});
        else
            variablesNotDefVal.push_back({variables[i].name, 0});
    }
    
    // create struct and pointer type
    StructType* st = StructType::create(*ctx.context, varTypes, className);
    Type* pt = PointerType::get(st, 0);
     
    // add to compilation context
    ctx.createClass(className, st, pt, variables); 
    ctx.runningClass = className;

    // if no constructor exists however there is variable defined 
    if (constructors.size() == 0) {
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

        DeclareFunctionExpr(
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
        const auto cscope = ctx.classesDefined[className];

        // found class scope; allocate memory for class
        auto alloc = ctx.builder->CreateAlloca(cscope.type, 0, varName);
        ctx.createVarName(varName, VariableScope { cscope.name, alloc });

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

/**

; The structure definition for class Foo.
%Foo = type { i32 }

; The default constructor for class Foo.
define void @Foo_Create_Default(%Foo* %this) nounwind {
    %1 = getelementptr %Foo, %Foo* %this, i32 0, i32 0
    store i32 0, i32* %1
    ret void
}

; The Foo::GetLength() method.
define i32 @Foo_GetLength(%Foo* %this) nounwind {
    %1 = getelementptr %Foo, %Foo* %this, i32 0, i32 0
    %2 = load i32, i32* %1
    ret i32 %2
}


; The Foo::SetLength() method.
define void @Foo_SetLength(%Foo* %this, i32 %value) nounwind {
    %1 = getelementptr %Foo, %Foo* %this, i32 0, i32 0
    store i32 %value, i32* %1
    ret void
}

 */