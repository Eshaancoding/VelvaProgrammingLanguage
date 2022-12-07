#include "Parser.hpp"

optional<unique_ptr<StringExpr>> Parser::ParseString () {
    currentToken = move(lexer.getToken()); // eat the "
    return nullopt;
}