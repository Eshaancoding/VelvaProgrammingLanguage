#include "AST.hpp"

optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }

static string condPrefix = "1";

optional<Value*> BranchExpr::codegen(CompilationContext &ctx) {
    Function *f = ctx.builder->GetInsertBlock()->getParent();
    BasicBlock *ifBB = ctx.builder->GetInsertBlock();
    string thenName = condPrefix + "then1", elseName = condPrefix + "else1";
    BasicBlock *thenBB = BasicBlock::Create(*ctx.context, thenName, f);
    BasicBlock *elseBB = BasicBlock::Create(*ctx.context, elseName, f);
    vector<BasicBlock*> blocks({ifBB});
    for(auto const &block: ifMap) {
        if (block.first) {
            blocks.push_back(thenBB);
            ctx.builder->SetInsertPoint(ifBB);
            auto condV = (*block.first)->codegen(ctx);
            if (!condV) return nullopt;
            auto cond = ctx.builder->CreateICmpEQ(*condV, ConstantInt::get(*ctx.context, APInt(32, 0)), "ifcond"); // CreateICmpONE doesn't exist, did you mean CreateICmp
            ctx.builder->CreateCondBr(cond, thenBB, elseBB);
            ctx.builder->SetInsertPoint(thenBB);
            for(auto &expr: block.second) {
                expr->codegen(ctx);
            }
            ifBB = elseBB;
            thenBB = BasicBlock::Create(*ctx.context, thenName, f);
            elseBB = BasicBlock::Create(*ctx.context, elseName + "1", f);
        } else {
            ctx.builder->SetInsertPoint(ifBB);
            ctx.builder->CreateBr(elseBB);
            blocks.push_back(elseBB);
            ctx.builder->SetInsertPoint(elseBB);
            for(auto &expr: block.second) {
                expr->codegen(ctx);
            }
        }
        thenName += "1";
        elseName += "1";
    }
    BasicBlock *mergeBB = BasicBlock::Create(*ctx.context, condPrefix + "merge", f);
    for(auto const &block: blocks) {
        ctx.builder->SetInsertPoint(block);
        ctx.builder->CreateBr(mergeBB);
    }
    condPrefix += "a";
    return nullopt;
}

string BranchExpr::debug_info() {
    string s;
    for(auto &thing: ifMap) {
        s += "Condition: " + (*thing.first)->debug_info() + "\n";
        s += "Value: ";
        for (auto &expr: thing.second) {
            s += expr->debug_info();
        }
        s+= "\n";
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
