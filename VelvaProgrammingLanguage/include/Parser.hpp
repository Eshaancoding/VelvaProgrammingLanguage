#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <memory.h>

class Parser {
private:
    Token* currentToken;
    Lexer lexer;
public: 
    Parser (char* filename); 
    Expr ParseVariableDeclaration();
    Expr ParsePrintDeclaration(bool is_floating_point); 
    Expr MainParser (); 
};

#endif