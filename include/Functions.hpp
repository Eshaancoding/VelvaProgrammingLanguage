#ifndef FUNCTIONS
#define FUNCTIONS
#include "AST.hpp"

void initializeFunction (CompilationContext &ctx, string name, vector<tuple<string, string>> params,optional<string> returnType) {
    auto result = DeclareFunctionExpr(
        true, 
        false,
        name, 
        params,
        returnType,
        nullopt
    ).codegen(ctx);
}

void initializeAllFFIFunc (CompilationContext &ctx) {
    ctx.createToGlobal = true; 
    initializeFunction(ctx, "cos", {{"float", "x"}}, "float");
    initializeFunction(ctx, "sin", {{"float", "x"}}, "float");
    initializeFunction(ctx, "cos", {{"int", "x"}}, "float");
    initializeFunction(ctx, "sin", {{"int", "x"}}, "float");
    initializeFunction(ctx, "putchar", {{"int", "x"}}, "int");
    initializeFunction(ctx, "printf", {{"string", "x"}}, "int");
    ctx.createToGlobal = false; 
}

#endif