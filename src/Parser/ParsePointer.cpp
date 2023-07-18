#include "TreeSitterParser.hpp"

unique_ptr<PointerExpr> Parser::ParsePointer () {
    cursor.goToChild();
    auto expr = ParseExpression();

    return make_unique<PointerExpr>(move(expr));
}