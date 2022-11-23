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
            if (name == "int") {
                auto result = ParseVariableDeclaration(false);
                if (auto output = std::get_if<unique_ptr<VarDeclareExpr>>(&result)) {
                    printf("AST: %s\n", (*output)->debug_info().c_str());
                    // return std::move(*output);
                }
                else {
                    return false;
                }
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if (auto output = std::get_if<unique_ptr<VarDeclareExpr>>(&result)) {
                    printf("AST: %s\n", (*output)->debug_info().c_str());
                }
                else {
                    return false;
                }
            }
            else if (name == "print") {
                printf("AST: %s\n", ParsePrintDeclaration()->debug_info().c_str());
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