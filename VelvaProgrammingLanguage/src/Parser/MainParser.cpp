#include "Parser.hpp"

Parser::Parser (char* filename) {
    this->lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
}

bool Parser::MainParser () {
    CompilationContext ctx;
    auto fn = make_unique<DeclareFunctionExpr>(false, false, "__main__", {}, nullopt);

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
                    fn->body.push_back(result);
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                } else {
                    return false; 
                }
            }
            else if (name == "float") {
                auto result = ParseVariableDeclaration(true);
                if (result) {
                    fn->body.push_back(result);
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                } 
            }
            // Print Declaration
            else if (name == "print") {
                fn->body.push_back(result);
                printf("AST: %s\n", (*ParsePrintDeclaration())->debug_info().c_str());
            }
            else if (name == "func") {
                auto result = ParseDeclareFunctionExpr(false);
                if (result) {
                    fn->body.push_back(result);
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                }
                else
                    printf("AST parse dec func undefined\n");
            }
            else if (name == "pure") {
                auto result = ParseDeclareFunctionExpr(true);
                if (result) {
                    fn->body.push_back(result);
                    printf("AST: %s\n", (*result)->debug_info().c_str());
                }
                else
                    printf("AST parse dec func undefined\n");

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

    fn->codegen(ctx)->print(errs());

    return true;
}