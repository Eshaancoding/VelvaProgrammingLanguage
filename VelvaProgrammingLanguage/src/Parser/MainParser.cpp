#include "Parser.hpp"

Parser::Parser () {
    this->currentToken = lexer.getToken();
}

Parser::Parser (char* filename) {
    lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

std::optional<unique_ptr<Expr>> Parser::MainParser () {
    // Main parser, which will iterate through until there's an EOF token 
    while (!currentToken->isEOF() && !currentToken->isErr()) {
        printf("%s\n", currentToken->to_str().c_str());
        
        // it's an identifier
        if (currentToken->isIdent()) {
            std::string name = currentToken->getName();
            if (name == "int") {
                // okay daniel I am kind of inspired by you so now I am going to study french while you fix linker err because I fixed compile err
                auto result = ParseVariableDeclaration(false);
                if (std::holds_alternative<unique_ptr<VarDeclareExpr>>(result)) {
                    // suceeds!
                    return std::get<unique_ptr<VarDeclareExpr>> (ParseVariableDeclaration(false));
                } else {
                    return std::nullopt; // yeah ik you could return {} whatevs
                }
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if (std::holds_alternative<unique_ptr<VarDeclareExpr>>(result)) {
                    // suceeds!
                    return std::get<unique_ptr<VarDeclareExpr>> (ParseVariableDeclaration(false));
                } else {
                    return std::nullopt;
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
    }

    // If it terminates suddendly, then there must be something wrong with the error token or that there's nothing in the file.
    lexer.log_err("Parser error or end of file");
    return make_unique<ErrorExpr>();
}