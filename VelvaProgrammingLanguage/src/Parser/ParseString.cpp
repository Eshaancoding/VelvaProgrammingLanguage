#include "Parser.hpp"

optional<unique_ptr<StringExpr>> Parser::ParseString () {
    StringExpr expr;
    string str_app;
    currentToken = lexer.getToken(); // eat the "
}