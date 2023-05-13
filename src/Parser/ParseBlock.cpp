#include "TreeSitterParser.hpp"

unique_ptr<BlockExpr> Parser::ParseBlock () {
    BlockExpr block;
    int num = cursor.getNumChilds();
    auto node = cursor.goToChild();
    for (int i = 0; i < num; i++) {
        auto gen = ParseGeneral();
        if (std::holds_alternative<unique_ptr<Expr>>(move(gen))) {
            unique_ptr<Expr> val = std::get<unique_ptr<Expr>>(move(gen));
            block.add(move(val));
        } 
        else if (std::holds_alternative<unique_ptr<DeclareFunctionExpr>>(move(gen))) {
            unique_ptr<DeclareFunctionExpr> val = std::get<unique_ptr<DeclareFunctionExpr>>(move(gen));
            block.add(move(val));
        }
        if (i < num-1)
            node = cursor.goToSibling();
    }
    cursor.goToParent(); // go back to block

    return make_unique<BlockExpr>(move(block));
}