#include "AST.hpp"

optional<Value*> ClassExpr::codegen(CompilationContext &ctx) {
    // get types of all vars 
    vector<Type*> varTypes;
    for (int i = 0; i < variables.size(); i++) {
        auto t = ctx.convertToLLVMType(variables[i].type);
        varTypes.push_back(t);
        variables[i].llvmType = t;
    }
    
    // create struct and pointer type
    StructType* st = StructType::create(*ctx.context, varTypes, className);
    Type* pt = PointerType::get(st, 0);
     
    // add to compilation context
    ctx.createClass(className, st, pt, variables); 
    ctx.runningClass = true;

    // define constructors
    for (int i = 0; i < constructors.size(); i++) {
        auto c = move(constructors[i]);
        c.params.push_back({"pt:"+className, "this"}); // return pointer type

        // go through block expr now and see what variables are declared
        // if not declared, either do default value or value set in equal sign in the original constructor
        

        // process declare func expr
        DeclareFunctionExpr(
            false,
            false,
            "constructor_"+className,
            move(c.params), 
            std::nullopt,
            move(c.blockExpr)
        ).codegen(ctx);
    }

    // define functions
    bool definedConstruct = false;
    for (int i = 0; i < functions.size(); i++) {
        auto f = move(functions[i].expr); 

        // add class name in front of name
    }

    // pop from class frame
    ctx.popFrame();
    ctx.runningClass = false;

    return nullopt;
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