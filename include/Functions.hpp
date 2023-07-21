#ifndef FUNCTIONS
#define FUNCTIONS
#include "AST.hpp"

void initializeFunction (CompilationContext &ctx, string name, vector<tuple<string, string>> params,optional<string> returnType, bool isVarArg=false) {
    auto result = DeclareFunctionExpr(
        true, 
        false,
        name, 
        params,
        returnType,
        nullopt,
        false,
        isVarArg
    ).codegen(ctx);
}

void initializeAllFFIFunc (CompilationContext &ctx) {
    ctx.createToGlobal = true; 
    initializeFunction(ctx, "cos", {{"float", "x"}}, "float");
    initializeFunction(ctx, "sin", {{"float", "x"}}, "float");
    initializeFunction(ctx, "cos", {{"int", "x"}}, "float");
    initializeFunction(ctx, "sin", {{"int", "x"}}, "float");
    initializeFunction(ctx, "putchar", {{"int", "x"}}, "int");
    initializeFunction(ctx, "printf", {{"ptr<char>", "x"}}, "int", true);
    initializeFunction(ctx, "malloc", {{"int", "x"}}, "ptr<int>"); // string is really an int8ptr
    initializeFunction(ctx, "free", {{"string", "x"}}, nullopt);
    initializeFunction(ctx, "memcpy", {{"string", "x"}, {"string", "y"}, {"int", "z"}}, "string");
    ctx.createToGlobal = false; 
}

#endif