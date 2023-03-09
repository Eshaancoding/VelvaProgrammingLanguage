#include "TreeSitterParser.hpp"
#include <cstring>
#include <string>
unique_ptr<Expr> Parser::ParseExpression () {
    auto node = cursor.goToChild();
    auto type = cursor.getType();

    if (type == "binary_expression")
        return ParseBinaryOp();
    else 
        cerr << "Dogshaan screwed up";
}

unique_ptr<Expr> Parser::ParseNumber() {
    auto src = cursor.sourceStr();
    return make_unique<IntExpr>(stoi(src));
}

unique_ptr<Expr> Parser::ParseBinaryop() {
    auto src = cursor.currentNode();
    
}