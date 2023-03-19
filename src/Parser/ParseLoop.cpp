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

    assert(cursor.getType() == "var_declaration");
    auto varDecl = ParseVarDecl();
    cursor.goToSibling();

    assert(cursor.getType() == "condition");
    auto condition = ParseCondition();
    cursor.goToSibling();

    assert(cursor.getType() == "assignment");
    auto operation = ParseAssigment();
    cursor.goToSibling();

    assert(cursor.getType() == "block");

    auto block = ParseBlock();

    cursor.goToParent();

    return make_unique<ForExpr>(move(varDecl), move(condition), move(operation), move(block));
}