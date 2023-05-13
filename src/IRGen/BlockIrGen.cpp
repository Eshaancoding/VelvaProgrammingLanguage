#include "AST.hpp"

optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }


optional<Value*> BlockExpr::codegen (CompilationContext &ctx) {
    for (int i = 0; i < counter; i++) {
        if (expr_map.count(i) == 1) {
            // exists in expr_map
            expr_map[i]->codegen(ctx);
        }
        else if (function_map.count(i) == 1) {
            auto prevBlock = ctx.builder->GetInsertBlock();
            auto x = function_map[i]->codegen(ctx);
            ctx.builder->SetInsertPoint(prevBlock);
        }
    }
    return nullopt;
}

