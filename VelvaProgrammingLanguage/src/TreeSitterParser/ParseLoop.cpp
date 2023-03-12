#include "TreeSitterParser.hpp"
using namespace std;

unique_ptr<Expr> Parser::ParseWhile() {
    cursor.goToChild();

    auto condition = ParseCondition();
    cursor.goToSibling();

    auto block = ParseBlock();

    cursor.goToParent();

    return make_unique<WhileExpr>(move(condition), move(block));
}

unique_ptr<Expr> Parser::ParseForLoop() {
    cursor.goToChild();

    auto varDecl = ParseVarDecl();
    cursor.goToSibling();
    auto condition = ParseCondition();
    cursor.goToSibling();
    auto operation = ParseAssigment();
    cursor.goToSibling();
    auto block = ParseBlock();

    cursor.goToParent();

    return make_unique<ForExpr>(move(varDecl), move(condition), move(operation), move(block));
}