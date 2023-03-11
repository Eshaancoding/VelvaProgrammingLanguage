#include "TreeSitterParser.hpp"

unique_ptr<Expr> Parser::ParseCondition () {

    cursor.goToChild();

    assert(cursor.getType() == "expression");
    auto firstExpr = ParseExpression();

    cursor.goToSibling();
    assert(cursor.getType() == "comparison_op");
    std::string op = cursor.getSourceStr();

    cursor.goToSibling();
    assert(cursor.getType() == "expression");
    auto secondExpr = ParseExpression();

    cursor.goToParent();

    return make_unique<BinaryOpExpr>(op, move(firstExpr), move(secondExpr));
}

unique_ptr<Expr> Parser::ParseIfStatement () {
    auto childNode = cursor.goToChild();
    assert(cursor.getType() == "condition");

    auto expr = ParseCondition();

    
    cursor.goToSibling();
    assert(cursor.getType() == "block");
    auto block = ParseBlock();
    cursor.goToParent();

    // return make_unique<IfStatement>(move(firstExpr), op, move(secondExpr), move(block)); 
    return nullptr;
}