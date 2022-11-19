#include "Parser.hpp"

Parser::Parser (char* filename) {
    lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

Parser::MainParser () {
    // Main parser, which will iterate through until there's an EOF token 
    while (!token->isEOF() && !token->isErr()) {
        printf("%s\n", token->to_str().c_str());
        
        // it's an identifier
        if (token.isIdent()) {
            switch (token.getName())
            {
            case "int":
                ParseVariableDeclaration(false);
                break;
            case "float":
                ParseVariableDeclaration(true);
                break;
            case "print":
                ParsePrintDeclaration();
                break;
            default:
                lexer.log_err("Unexpected Identifier!");
                token = new ERRToken(); 
                break;
            }
        }

        token = lexer.getToken();
    }
}