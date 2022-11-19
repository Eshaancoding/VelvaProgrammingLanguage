#include "Parser.hpp"

Parser::Parser () {
    this->currentToken = lexer.getToken();
}

Parser::Parser (char* filename) {
    lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

unique_ptr<Expr> Parser::MainParser () {
    // Main parser, which will iterate through until there's an EOF token 
    while (!currentToken->isEOF() && !currentToken->isErr()) {
        printf("%s\n", currentToken->to_str().c_str());
        
        // it's an identifier
        if (currentToken->isIdent()) {
            std::string name = currentToken->getName();
            if (name == "int") {
                return ParseVariableDeclaration(false);
            }
            else if (name == "float") {
                return ParseVariableDeclaration(true);
            }
            else if (name == "print") {
                return ParsePrintDeclaration();
            }
            else {
                lexer.log_err("Undefined identifier");
                return make_unique<ErrorExpr>();
            } 
        }
        currentToken = lexer.getToken();
    }
}