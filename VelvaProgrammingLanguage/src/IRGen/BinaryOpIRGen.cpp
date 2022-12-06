#include "AST.hpp"

optional<Value*> BinaryOpExpr::codegen (CompilationContext &ctx) {
    // to be implemented
    if (op == "+") {
        return ctx.builder->CreateAdd(*(LHS->codegen(ctx)), *(RHS->codegen(ctx))); //currently assumes everything is an int
    } else if (op == "*") {
        return ctx.builder->CreateMul(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == ">") {

    } else if (op == "<") {

    } else if (op == ">=") {

    } else if(op == "<=") {

    } else if (op == "-") {

    } else if (op == "/") {

    } else if (op == "%") {

    } else if (op == "==") {

    } else if (op == "&&") {

    } else if (op == "||") {
        
    }
    else {
        return nullopt;
    }
}