#include "TreeSitterParser.hpp"

unique_ptr<Expr> Parser::ParseTernary () {
    cursor.goToChild();
    
    assert(cursor.getType() == "condition");
    auto condition = ParseCondition();

    cursor.goToSibling();
    assert(cursor.getType() == "expression");
    auto successCondition = ParseExpression();

    cursor.goToSibling();
    assert(cursor.getType() == "expression");
    auto failureCondition = ParseExpression();

    cursor.goToParent();
    return make_unique<TernaryExpr>(move(condition), move(successCondition), move(failureCondition));
}

unique_ptr<Expr> Parser::ParseParanthesis () {
    cursor.goToChild();
    unique_ptr<Expr> expr;
    if (cursor.getType() == "expression")
        expr = ParseExpression();
    else if (cursor.getType() == "binary_expression")
        expr = ParseBinaryOp();
    else throw invalid_argument("Invalid type");

    cursor.goToParent();
    return move(expr);
}