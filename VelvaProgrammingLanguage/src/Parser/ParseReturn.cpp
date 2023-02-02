#include "Parser.hpp"

optional<unique_ptr<ReturnStateExpr>> Parser::ParseReturn () {
    currentToken = lexer.getToken();
    auto expr = ParseExpression();
    if (expr) return make_unique<ReturnStateExpr>(move(*expr));
    else return nullopt;
}