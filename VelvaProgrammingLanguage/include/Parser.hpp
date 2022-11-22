#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <memory.h>
#include <variant>

class Parser {
private:
    Token* currentToken;
    Lexer lexer;
public: 
    Parser ();
    Parser (char* filename); 
    variant<unique_ptr<VarDeclareExpr>, unique_ptr<ErrorExpr>> ParseVariableDeclaration(bool is_floating_point);
    unique_ptr<Expr> ParsePrintDeclaration(); 
    optional<unique_ptr<Expr>> MainParser ();
};

#endif