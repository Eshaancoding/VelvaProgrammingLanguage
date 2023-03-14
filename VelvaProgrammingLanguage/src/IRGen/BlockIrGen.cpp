#include "AST.hpp"
#include "Utils.hpp"

optional<Value*> BlockExpr::codegen (CompilationContext &ctx) {
    for (int i = 0; i < counter; i++) {
        if (expr_map.count(i) == 1) {
            // exists in expr_map
            expr_map[i]->codegen(ctx);
        }
        else if (function_map.count(i) == 1) {
            auto prevBlock = ctx.builder->GetInsertBlock();
            auto x = function_map[i]->codegen(ctx);
            if (x) (*x)->print(llvm::errs());
            ctx.builder->SetInsertPoint(prevBlock);
        }
    }

    return nullopt;
}

optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }


optional<Value*> BranchExpr::codegen(CompilationContext &ctx) {
    Function *f = ctx.builder->GetInsertBlock()->getParent();
    this->debug_info();
    BasicBlock *ifBB = ctx.builder->GetInsertBlock();
    BasicBlock *thenBB = BasicBlock::Create(*ctx.context, ctx.names.use("then"), f);
    BasicBlock *elseBB = BasicBlock::Create(*ctx.context, ctx.names.use("else"), f);
    vector<BasicBlock*> blocks;
    for(auto const &block: ifMap) {
        if (get<0>(block).has_value()) {
            blocks.push_back(thenBB);
            blocks.push_back(elseBB);
            ctx.builder->SetInsertPoint(ifBB);
            auto condV = (*get<0>(block))->codegen(ctx);
            if (!condV) return nullopt;

            // actual code
            auto cond = ctx.builder->CreateICmpEQ(*condV, ConstantInt::get(*ctx.context, APInt(1, 1)), ctx.names.use("ifcond")); // CreateICmpONE doesn't exist, did you mean CreateICmp
            ctx.builder->CreateCondBr(cond, thenBB, elseBB);
            ctx.builder->SetInsertPoint(thenBB);
            // codegne body
            get<1>(block)->codegen(ctx);
            
            ifBB = elseBB;
        } else {
            ctx.builder->SetInsertPoint(ifBB);

            // codegne body
            get<1>(block)->codegen(ctx);

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
        if (get<0>(itr)) {
            // conditional does exist
            s += "Conditional: " + (*get<0>(itr))->debug_info() + "\n";
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



string WhileExpr::debug_info() {
    string s = "Cond: " + cond->debug_info() + "\nBody: \n";
    s += body->debug_info();
    return s;
}

optional<Value*> ReturnExpr::codegen (CompilationContext &ctx) {
    if (!val) return ctx.builder->CreateRetVoid(); 
    auto codegen = (*val)->codegen(ctx);
    if (codegen)
        return ctx.builder->CreateRet(*codegen);
    else 
        throw invalid_argument("Cannot return unsuccessful value codegen");
}