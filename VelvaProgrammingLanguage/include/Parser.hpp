#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <memory.h>
#include <map>
#include <variant>
#include <cmath>
#include <tuple>
class Parser {
private:
    Token* currentToken;
    Lexer lexer;
public: 
    Parser (char* filename); 
    optional<unique_ptr<VarDeclareExpr>> ParseVariableDeclaration(bool is_floating_point);
    optional<unique_ptr<PrintExpr>> ParsePrintDeclaration(); 
    optional<unique_ptr<DeclareFunctionExpr>> ParseDeclareFunctionExpr (bool isPure);
    optional<unique_ptr<AssignExpr>> ParseAssignExpr (string varName);
    optional<unique_ptr<CallFuncExpr>> ParseCallExpr (string funcName);
    optional<unique_ptr<StringExpr>> ParseString (); 
    bool MainParser ();
};

#endif