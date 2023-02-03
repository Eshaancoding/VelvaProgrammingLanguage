#include "AST.hpp"
#include "Utils.hpp"

Value *GenerateBinaryOp(CompilationContext &ctx, TSNode *node) {
    
}
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
        cout << "----\n";
        auto a = *(LHS->codegen(ctx));
        auto b = *(RHS->codegen(ctx));
        return ctx.builder->CreateICmpEQ(a, b);
    }
    else if (op == "&&") {
        // expr1 ? expr2 : false
        auto F = ctx.builder->GetInsertBlock()->getParent();
        BasicBlock *lbb = BasicBlock::Create(*ctx.context, ctx.names.use("or_lhs"), F);
        ctx.builder->SetInsertPoint(lbb);
        auto lhs = *(LHS->codegen(ctx));
        BasicBlock *rbb = BasicBlock::Create(*ctx.context, ctx.names.use("or_rhs"), F);
        BasicBlock *merge = BasicBlock::Create(*ctx.context, ctx.names.use("or_merge"), F);
        ctx.builder->CreateCondBr(lhs, rbb, merge);
        ctx.builder->SetInsertPoint(rbb);
        auto rhs = *(RHS->codegen(ctx));
        ctx.builder->SetInsertPoint(merge);

        auto pn = ctx.builder->CreatePHI(Type::getInt32Ty(*ctx.context), 2, ctx.names.use("or_phi"));
        pn->addIncoming(ConstantInt::get(*ctx.context, APInt(8, 0)), lbb);
        pn->addIncoming(rhs, rbb);
        return pn;
    } else if (op == "||") {
        auto F = ctx.builder->GetInsertBlock()->getParent();
        BasicBlock *lbb = BasicBlock::Create(*ctx.context, ctx.names.use("or_lhs"), F);
        ctx.builder->SetInsertPoint(lbb);
        auto lhs = *(LHS->codegen(ctx));
        BasicBlock *rbb = BasicBlock::Create(*ctx.context, ctx.names.use("or_rhs"), F);
        BasicBlock *merge = BasicBlock::Create(*ctx.context, ctx.names.use("or_merge"), F);
        ctx.builder->CreateCondBr(lhs, merge, rbb);
        ctx.builder->SetInsertPoint(rbb);
        auto rhs = *(RHS->codegen(ctx));
        ctx.builder->SetInsertPoint(merge);

        auto pn = ctx.builder->CreatePHI(Type::getInt32Ty(*ctx.context), 2, ctx.names.use("or_phi"));
        pn->addIncoming(ConstantInt::get(*ctx.context, APInt(8, 1)), lbb);
        pn->addIncoming(rhs, rbb);
        return pn;
    }
    else {
        return nullopt;
    }
}