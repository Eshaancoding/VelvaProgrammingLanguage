#include "AST.hpp"
#include "CompilationContext.hpp"
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
        auto a = *(LHS->codegen(ctx));
        auto b = *(RHS->codegen(ctx));
        return ctx.builder->CreateICmpEQ(a, b);
    }
    else if (op == "and") {
        // expr1 ? expr2 : false
        auto tn = TernaryExpr(move(LHS), move(RHS), make_unique<IntExpr>(IntExpr(0)));
        return tn.codegen(ctx);
    } else if (op == "or") {
        //expr1 ? true : expr2
        auto tn = TernaryExpr(move(LHS), make_unique<IntExpr>(IntExpr(1)), move(RHS));
        return tn.codegen(ctx);
    }
    else {
        return nullopt;
    }
}

