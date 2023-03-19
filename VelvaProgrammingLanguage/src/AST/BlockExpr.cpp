#include "AST.hpp"

void BlockExpr::add (unique_ptr<Expr> expr) {
    expr_map[counter] = move(expr);
    counter += 1; 
}

void BlockExpr::add (vector<unique_ptr<Expr>> expr) {
    for (int i = 0; i < expr.size(); i++) {
        counter += 1; 
        expr_map[counter] = move(expr[i]);
    }
}

void BlockExpr::add (unique_ptr<DeclareFunctionExpr> func) {
    function_map[counter] = move(func);
    counter += 1;
}

