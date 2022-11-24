#include "Parser.hpp"

Parser::Parser (char* filename) {
    this->lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

bool Parser::MainParser () {
    // Main parser, which will iterate through until there's an EOF token 
    while (!currentToken->isEOF()) {
        if (currentToken->isErr())
            return false;
        
        // it's an identifier
        if (currentToken->isIdent()) {
            std::string name = currentToken->getName();
            // Variable Declaration
            if (name == "int") {
                auto result = ParseVariableDeclaration(false);
                if (result) {
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                } else {
                    return false; 
                }
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if (result) {
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                } 
            }
            // Print Declaration
            else if (name == "print") {
                printf("AST: %s\n", (*ParsePrintDeclaration())->debug_info().c_str());
            }
            else if (name == "func") {
                printf("AST: %s\n", (*ParseDeclareFunctionExpr())->debug_info().c_str());
            }
            else {
                lexer.log_err("Undefined identifier");
                return false;
            } 
        }
        else if (currentToken->isChar()) {
            if (currentToken->getCharacter() == ';') {
                currentToken = lexer.getToken();
                continue;
            }
        }
        currentToken = lexer.getToken();
    }

    // parses correctly
    return true;
}