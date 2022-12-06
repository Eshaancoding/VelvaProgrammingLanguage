#include "AST.hpp"

static string condPrefix = "1";

optional<Value*> BranchExpr::codegen(CompilationContext &ctx) {
    Function *f = ctx.builder.GetInsertBlock()->getParent();
    BasicBlock *ifBB = ctx.builder.GetInsertBlock();
    string thenName = condPrefix + "then1", elseName = condPrefix + "else1";
    BasicBlock *thenBB = BasicBlock::Create(*ctx, thenName, f);
    BasicBlock *elseBB = BasicBlock::Create(*ctx, thenName, f);
    vector<BasicBlock*> blocks;
    for(auto const &block: ifMap) {
        if (block.first) {
            blocks.push_back(thenBB);
            ctx.builder.SetInsertPoint(ifBB);
            auto condV = block.first->codegen(ctx);
            auto cond = ctx.builder.CreateICmpONE(condV, ConstantInt::get(0), "ifcond");
            ctx.builder.CreateCondBr(cond, thenBB, elseBB);
            ctx.builder.SetInsertPoint(thenBB);
            for(auto &expr: builder.second) {
                expr->codegen(ctx);
            }
            thenBB = elseBB;
            elseBB = BasicBlock::Create(*ctx, thenName, f);
        } else {
            ctx.builder.SetInsertPoint(ifBB);
            ctx.builder.CreateBr(elseBB);
            blocks.push_back(elseBB);
            ctx.builder.SetInsertPoint(elseBB);
            for(auto &expr: builder.second) {
                expr->codegen(ctx);
            }
        }
        thenName += "1";
        elseName += "1";
    }
    BasicBlock *mergeBB = BasicBlock::Create(*ctx, condPrefix + "merge", f);
    for(auto const &block: blocks) {
        ctx.builder.SetInsertPoint(block);
        ctx.builder.CreateBr(mergeBB);
    }
    condPrefix += "1";
    return nullopt;
}

string BranchExpr::debug_info() {
    string s;
    for(auto &thing: ifMap) {
        s += "Condition: " + thing.first->debug_info() + "\n";
        s += "Value: ";
        for (auto &expr: thing.second) {
            s += expr->debug_info();
        }
        s+= "\n";
    }
    return s;
}

optional<Value*> TernaryExpr::codegen(CompilationContext ctx) {
    return ctx.builder.CreateSelect(*(_if->codegen(ctx), *(then->codegen(ctx))), *(_else->codegen(ctx)));
}

string TernaryExpr::debug_info() {
    return _if->debug_info() + " ? " + then->debug_info() + " : " + _else->debug_info();
}
