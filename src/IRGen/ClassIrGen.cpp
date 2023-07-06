#include "AST.hpp"

optional<Value*> ClassExpr::codegen(CompilationContext &ctx) {
    // get types of all vars 
    vector<Type*> varTypes;
    for (int i = 0; i < variables.size(); i++) {
        varTypes.push_back(ctx.convertToLLVMType(variables[i].type));
    }
    
    // create struct based on variables
    StructType* st = StructType::create(*ctx.context, varTypes, className);
    
    // add to compilation context
    ctx.createClass(className, st);

    // define constructors
    for (int i = 0; i < constructors.size(); i++) {
        auto c = move(constructors[i]);
        c.params.push_back({"cp:"+className, "this"});

        DeclareFunctionExpr(
            false,
            false,
            "constructor",
            move(c.params), 
            std::nullopt,
            move(c.blockExpr)
        ).codegen(ctx);
    }

    // define functions
    bool definedConstruct = false;
    for (int i = 0; i < functions.size(); i++) {
        auto f = move(functions[i].expr);
    }

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