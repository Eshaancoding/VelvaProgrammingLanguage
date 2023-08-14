#include "AST.hpp"

optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }


optional<Value*> BlockExpr::codegen (CompilationContext &ctx) {
    for (int i = 0; i < counter; i++) {
        if (expr_map.count(i) == 1) {
            // exists in expr_map
            expr_map[i]->codegen(ctx);
        }
        else {
            auto prevBlock = ctx.builder->GetInsertBlock();
            auto x = function_map[i]->codegen(ctx);
            ctx.builder->SetInsertPoint(prevBlock);
        }
    }
    return nullopt;
}

vector<string> BlockExpr::varsDefined () {
    unordered_map<string, int> m;
    vector<string> list;
    for (int i = 0; i < counter; i++) {
        if (expr_map.count(i) == 1) {
            // exists in expr map
            const auto result = expr_map[i]->returnVariableDefined();
            if (result != "" && m.find(result) == m.end()) {
                list.push_back(result);
                m[result] = 1;
            }
        }
    }
    return list;
}
