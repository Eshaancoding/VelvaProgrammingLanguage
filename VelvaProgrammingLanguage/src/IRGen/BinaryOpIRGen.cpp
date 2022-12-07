#include "AST.hpp"

optional<Value*> BinaryOpExpr::codegen (CompilationContext &ctx) {
    // to be implemented
    if (op == "+") {
        return ctx.builder->CreateAdd(*(LHS->codegen(ctx)), *(RHS->codegen(ctx))); //currently assumes everything is an int
    } else if (op == "*") {
        return ctx.builder->CreateMul(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == ">") {
        return ctx.builder->CreateICmpSGT(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == "<") {
        return ctx.builder->CreateICmpSLT(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == ">=") {
        return ctx.builder->CreateICmpSGE(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if(op == "<=") {
        return ctx.builder->CreateICmpSLE(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == "-") {
        return ctx.builder->CreateSub(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == "/") {
        return ctx.builder->CreateSDiv(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == "%") {
        return ctx.builder->CreateICmpEQ(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    } else if (op == "==") {
        return ctx.builder->CreateICmpEQ(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)));
    }
    // These operators don't short circuit yet because I'm lazy 
    else if (op == "&&") {
        // expr1 ? expr2 : false
        return ctx.builder->CreateSelect(*(LHS->codegen(ctx)), *(RHS->codegen(ctx)), ConstantInt::get(0));
    } else if (op == "||") {
        // expr1 ? true : (expr2 ? true : false)
        return ctx.builder->CreateSelect(*(LHS->codegen(ctx)), ConstantInt::get(1),
            ctx.builder->CreateSelect(*(RHS->codegen(ctx)), ConstantInt::get(1), ConstantInt::get(0)));
    }
    else {
        return nullopt;
    }
}