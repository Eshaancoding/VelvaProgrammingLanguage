#include "Parser.hpp"

optional<unique_ptr<StringExpr>> Parser::ParseString () {
    currentToken = lexer.getToken(); // eat the "
}