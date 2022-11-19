#include "Parser.hpp"

/**
 * @brief Parses a statement with keyword `print`
 */
unique_ptr<Expr> Parser::ParsePrintDeclaration() {
    // todo: eventually this'll be used for different functions :)

    Token* printToken = lexer.getToken(); //eat print
    if (!printToken->isIdent()) {
        lexer.log_err("Expected identifier");
    } else if (printToken->getName() != "print") {
        lexer.log_err("Undefined identifier");
    }
    Token* leftParenToken = lexer.getToken(); //eat '('
    if (!leftParenToken->isChar()) {
        lexer.log_err("Expected '('");
    } else if (leftParenToken->getName() != "(") {
        lexer.log_err("Expected '('");
    }
    Token* argToken = lexer.getToken(); //eat arg variable
    if (!argToken->isIntIdent() && !argToken->isFloatIdent()) {
        lexer.log_err("Expected int or float value");
    }
    auto argExpr = std::make_unique<VarUseExpr>(argToken->getName()); //make VarUseExpr from token
    Token* rightParenToken = lexer.getToken(); //eat ')'
    if (!rightParenToken->isChar()) {
        lexer.log_err("Expected ')'");
    } else if (rightParenToken->getName() != ")") {
        lexer.log_err("Expected ')'");
    }
    return argExpr;
}