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
                if (result)
                    printf("AST: %s\n", (*result)->debug_info().c_str());
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if (result)
                    printf("AST: %s\n", (*result)->debug_info().c_str());
            }
            // Print Declaration
            else if (name == "print") {
                auto result = ParsePrintDeclaration();
                if (result) 
                    printf("AST: %s\n", (*result)->debug_info().c_str());
            }
            else if (name == "func") {
                auto result = ParseDeclareFunctionExpr(false);
                if (result)
                    printf("AST: %s\n", (*result)->debug_info().c_str());
            }
            else if (name == "pure") {
                auto result = ParseDeclareFunctionExpr(true);
                if (result)
                    printf("AST: %s\n", (*result)->debug_info().c_str());
            }
            else {
                // could be an assign expr or a declare function expr, we will decide from here
                currentToken = lexer.getToken();
                if (currentToken->getCharacter() == '(') {
                    // could be call expr 
                    auto result = ParseCallExpr(name);
                    if (result)
                        printf("AST: %s\n", (*result)->debug_info().c_str());
                }
                else if (currentToken->getCharacter() == '=') {
                    // assign expr 
                    auto result = ParseAssignExpr(name);
                    if (result)
                        printf("AST: %s\n", (*result)->debug_info().c_str());
                }
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