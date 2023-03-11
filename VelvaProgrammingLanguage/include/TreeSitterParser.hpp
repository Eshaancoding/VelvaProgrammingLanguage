#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <memory.h>
#include <map>
#include <variant>
#include <optional>
#include <cmath>
#include <tuple>
#include <functional>
#include <cassert>
#include <stdio.h>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>
#include "TreeSitterCursor.hpp"

#define GENERAL_TYPE std::variant<unique_ptr<Expr>, unique_ptr<DeclareFunctionExpr>>

extern "C"
{
    const TSLanguage *tree_sitter_Velva(void);
}

class Parser {
private:
    TSParser *parser;
    TSTree *tree;
    TreeSitterCursor cursor;
    std::string src;
public: 
    
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (const char* filename); 
    GENERAL_TYPE ParseGeneral ();
    unique_ptr<Expr> ParseBinaryOp ();
    unique_ptr<Expr> ParseExpression ();
    unique_ptr<Expr> ParseWhile();
    unique_ptr<Expr> ParseForLoop ();
    unique_ptr<Expr> ParseVarDecl ();
    unique_ptr<Expr> ParseNumber ();  
    unique_ptr<Expr> ParseIfStatement();
    unique_ptr<Expr> ParseIdentifier();
    unique_ptr<Expr> ParseBlock ();
    unique_ptr<Expr> ParseCondition ();
    std::unique_ptr<DeclareFunctionExpr> ParseFunctionDeclare ();
    std::unique_ptr<DeclareFunctionExpr> ParseAST ();

    
   void printTree (bool printNoNamedNodes=false, std::optional<TSNode> nodeInp = std::nullopt, int lvl=0);
   ~Parser ();
};

#endif