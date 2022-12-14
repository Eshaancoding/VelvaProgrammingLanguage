#include "AST.hpp"
#include "Utils.hpp"
optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }


optional<Value*> BranchExpr::codegen(CompilationContext &ctx) {
    Function *f = ctx.builder->GetInsertBlock()->getParent();
    BasicBlock *ifBB = ctx.builder->GetInsertBlock();
    BasicBlock *thenBB = BasicBlock::Create(*ctx.context, ctx.names.use("then"), f);
    BasicBlock *elseBB = BasicBlock::Create(*ctx.context, ctx.names.use("else"), f);
    vector<BasicBlock*> blocks;
    for(auto const &block: ifMap) {
        if (block.first.has_value()) {
            blocks.push_back(thenBB);
            ctx.builder->SetInsertPoint(ifBB);
            auto condV = (*block.first)->codegen(ctx);
            if (!condV) return nullopt;

            // actual code
            auto cond = ctx.builder->CreateICmpEQ(*condV, ConstantInt::get(*ctx.context, APInt(1, 1)), ctx.names.use("ifcond")); // CreateICmpONE doesn't exist, did you mean CreateICmp
            ctx.builder->CreateCondBr(cond, thenBB, elseBB);
            ctx.builder->SetInsertPoint(thenBB);
            for(auto &expr: block.second) {
                expr->codegen(ctx);
            }
            ifBB = elseBB;
        } else {
            ctx.builder->SetInsertPoint(ifBB);
            for(auto &expr: block.second) {
                expr->codegen(ctx);
            }
            blocks.push_back(ifBB);
        }
        thenBB = BasicBlock::Create(*ctx.context, ctx.names.use("then"), f);
        elseBB = BasicBlock::Create(*ctx.context, ctx.names.use("else"), f);
    }
    BasicBlock *mergeBB = BasicBlock::Create(*ctx.context, ctx.names.use("if_merge"), f);
    for (auto block: blocks) {
        ctx.builder->SetInsertPoint(block);
        ctx.builder->CreateBr(mergeBB);
    }
    ctx.builder->SetInsertPoint(mergeBB);
    return nullopt;
}

string BranchExpr::debug_info() {
    string s;
    for(auto &itr : ifMap) {
        // check if conditional exist
        if (itr.first) {
            // conditional does exist
            s += "Conditional: " + (*itr.first)->debug_info() + "\n";
        }
        else {
            s += "No conditional\n";
        }
        /*
        for (int i = 0; i < itr.second.size(); i++) {
            s += string("Line ") + to_string(i+1) + " : " + itr.second[i]->debug_info() + "\n"; 
        }
        */
    }
    return s;
}

optional<Value*> TernaryExpr::codegen(CompilationContext &ctx) {
    if (!_if) return nullopt;
    if (!then) return nullopt;
    if (!_else) return nullopt;

    auto if_Codegen = _if->codegen(ctx);
    if (!if_Codegen) return nullopt;
    auto then_Codegen = then->codegen(ctx);
    if (!then_Codegen) return nullopt;
    auto else_Codegen = _else->codegen(ctx);
    if (!else_Codegen) return nullopt;

    return ctx.builder->CreateSelect(*if_Codegen, *then_Codegen, *else_Codegen);
}

string TernaryExpr::debug_info() {
    return _if->debug_info() + " ? " + then->debug_info() + " : " + _else->debug_info();
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
    for (auto &expr: body) {
        expr->codegen(ctx);
    }
    ctx.builder->CreateBr(whileCond);
    ctx.builder->SetInsertPoint(endBB);
    return nullopt;
}

string WhileExpr::debug_info() {
    string s = "Cond: " + cond->debug_info() + "\nBody: \n";
    for(auto &expr: body) {
        s += "• " + expr->debug_info() + "\n";
    }
    return s;
}