#include "AST.hpp"

optional<Value*> ForExpr::codegen (CompilationContext &ctx) {
    auto f = ctx.builder->GetInsertBlock()->getParent();
    varDecl->codegen(ctx);

    BasicBlock *forCond = BasicBlock::Create(*ctx.context, ctx.names.use("for_cond"), f);
    BasicBlock *bodyBB = BasicBlock::Create(*ctx.context, ctx.names.use("for"), f);
    BasicBlock *endBB = BasicBlock::Create(*ctx.context, ctx.names.use("for_end"), f);

    ctx.builder->CreateBr(forCond);
    ctx.builder->SetInsertPoint(forCond);
    ctx.builder->CreateCondBr(*(condition->codegen(ctx)), bodyBB, endBB);
    ctx.builder->SetInsertPoint(bodyBB);
    body->codegen(ctx);
    operation->codegen(ctx);
    ctx.builder->CreateBr(forCond);
    ctx.builder->SetInsertPoint(endBB);
    return nullopt;
}

optional<Value*> WhileExpr::codegen(CompilationContext &ctx) {
    Function *f = ctx.builder->GetInsertBlock()->getParent();
    BasicBlock *whileCond = BasicBlock::Create(*ctx.context, ctx.names.use("while_cond"), f);
    BasicBlock *bodyBB = BasicBlock::Create(*ctx.context, ctx.names.use("while"), f);
    BasicBlock *endBB = BasicBlock::Create(*ctx.context, ctx.names.use("while_end"), f);
    ctx.builder->CreateBr(whileCond);
    ctx.builder->SetInsertPoint(whileCond);
    ctx.builder->CreateCondBr(*(cond->codegen(ctx)), bodyBB, endBB);
    ctx.builder->SetInsertPoint(bodyBB);
    body->codegen(ctx);
    ctx.builder->CreateBr(whileCond);
    ctx.builder->SetInsertPoint(endBB);
    return nullopt;
}