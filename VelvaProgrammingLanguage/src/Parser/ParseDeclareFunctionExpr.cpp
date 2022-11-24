#include "Parser.hpp"

optional<unique_ptr<DeclareFunctionExpr>> Parser::ParseDeclareFunctionExpr () {
    currentToken = lexer.getToken(); // eat func 
    if (!currentToken->isIdent()) {
        lexer.log_err("Expected function name.");
    }
    
}