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
        auto F = ctx.builder.GetInsertBlock()->getParent();
        BasicBlock *lbb = BasicBlock::Create(*ctx, ctx.names.use_name("or_lhs"), F);
        ctx.builder->SetInsertPoint(lbb);
        auto lhs = *(LHS->codegen(ctx));
        BasicBlock *rbb = BasicBlock::Create(*ctx, ctx.names.use_name("or_rhs"), F);
        BasicBlock *merge = BasicBlock::Create(*ctx, ctx.names.use_name("or_merge"), F);
        ctx.builder->CreateCondBr(lhs, rbb, merge);
        ctx.builder->SetInsertPoint(rbb);
        auto rhs = *(RHS->codegen(ctx));
        ctx.builder->SetInsertPoint(merge);

        auto pn = ctx.builder->CreatePHI(Type::getInt8Ty(), 2, ctx.names.use("or_phi"));
        pn->addIncoming(ConstantInt::get(0), lbb);
        pn->addIncoming(rhs, rbb);
        return pn;
    } else if (op == "||") {
        auto F = ctx.builder.GetInsertBlock()->getParent();
        BasicBlock *lbb = BasicBlock::Create(*ctx, ctx.names.use_name("or_lhs"), F);
        ctx.builder->SetInsertPoint(lbb);
        auto lhs = *(LHS->codegen(ctx));
        BasicBlock *rbb = BasicBlock::Create(*ctx, ctx.names.use_name("or_rhs"), F);
        BasicBlock *merge = BasicBlock::Create(*ctx, ctx.names.use_name("or_merge"), F);
        ctx.builder->CreateCondBr(lhs, merge, rbb);
        ctx.builder->SetInsertPoint(rbb);
        auto rhs = *(RHS->codegen(ctx));
        ctx.builder->SetInsertPoint(merge);

        auto pn = ctx.builder->CreatePHI(Type::getInt8Ty(), 2, ctx.names.use("or_phi"));
        pn->addIncoming(ConstantInt::get(1), lbb);
        pn->addIncoming(rhs, rbb);
        return pn;
    }
    else {
        return nullopt;
    }
}