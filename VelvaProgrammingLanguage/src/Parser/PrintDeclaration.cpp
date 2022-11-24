#include "Parser.hpp"

/**
 * @brief Parses a statement with keyword `print`
 */
optional<unique_ptr<PrintExpr>> Parser::ParsePrintDeclaration() {
    // todo: eventually this'll be used for different functions :)

    currentToken = lexer.getToken(); // eat print, get char (
    if (!currentToken->isChar()) {
        lexer.log_err("Expected '('");
        return nullopt;
    } else if (currentToken->getCharacter() != '(') {
        lexer.log_err("Expected '('");
        return nullopt;
    }

    // we will implement actual parse expressions and strings later
    unique_ptr<VarUseExpr> argExpr;
    currentToken = lexer.getToken(); //eat (, get identifier 
    if (currentToken->isIdent()) {
        argExpr = make_unique<VarUseExpr>(currentToken->getName());
    }
    else {
        lexer.log_err("Expected identifier"); 
        return nullopt;
    }

    currentToken = lexer.getToken(); // eat identifier, get '('
    if (!currentToken->isChar()) {
        lexer.log_err("Expected char ')'");
        return nullopt;
    } else if (currentToken->getCharacter() != ')') {
        lexer.log_err("Expected ')'");
        return nullopt;
    }
    return make_unique<PrintExpr>(std::move(argExpr));
}