#include "Parser.hpp"

Parser::Parser (char* filename) {
    this->lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

std::optional<unique_ptr<Expr>> Parser::MainParser () {
    // Main parser, which will iterate through until there's an EOF token 
    int iterations = 0; //**************** <============== DELETE THIS LATER OBV THIS IS FOR TESTING
    while (iterations < 100 && (!currentToken->isEOF() && !currentToken->isErr())) {
        printf("Current Token: %s\n", currentToken->to_str().c_str());
        
        // it's an identifier
        if (currentToken->isIdent()) {
            std::string name = currentToken->getName();
            if (name == "int") {
                auto result = ParseVariableDeclaration(false);
                if(auto output = std::get_if<unique_ptr<VarDeclareExpr>>(&result)) {
                    return std::move(*output);
                }
                else  {
                    return nullopt;
                }
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if(auto output = std::get_if<unique_ptr<VarDeclareExpr>>(&result)) {
                    return std::move(*output);
                }
                else {
                    return nullopt;
                }
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
        iterations++;
    }

    // If it terminates suddendly, then there must be something wrong with the error token or that there's nothing in the file.
    lexer.log_err("Parser error or end of file");
    return make_unique<ErrorExpr>();
}