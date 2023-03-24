#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
//#include "Lexer.hpp"
//#include "Token.hpp"
#include <string>
#include <memory.h>
#include <map>
#include <variant>
#include <optional>
#include <cmath>
#include <tuple>
#include <functional>
#include <cassert>
#include <fstream>
#include <stdio.h>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>
#include "TreeSitterCursor.hpp"

#define START_SYMBOL "main"
#define EXIT_SYMBOL "stop"

typedef std::variant<unique_ptr<Expr>, unique_ptr<DeclareFunctionExpr>> GeneralType;

#define GENERAL_TYPE _Pragma("GCC warning \"deprecated — use GeneralType instead of GENERAL_TYPE\"") GeneralType
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
    
    static string determineType (std::string firstType, std::string secondType);
    
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (const char* filename); 
    GeneralType ParseGeneral ();
    unique_ptr<Expr> ParseAssigment();
    unique_ptr<Expr> ParseBinaryOp ();
    unique_ptr<Expr> ParseReturn ();
    unique_ptr<Expr> ParseFuncCall ();
    unique_ptr<Expr> ParseExpression ();
    unique_ptr<Expr> ParseWhile();
    unique_ptr<Expr> ParseForLoop ();
    unique_ptr<Expr> ParseVarDecl ();
    unique_ptr<Expr> ParseNumber ();  
    unique_ptr<Expr> ParseString ();
    unique_ptr<Expr> ParseIfStatement();
    unique_ptr<Expr> ParseIdentifier();
    unique_ptr<BlockExpr> ParseBlock (bool lessVerbose=false);
    unique_ptr<Expr> ParseParanthesis ();
    unique_ptr<Expr> ParseTernary ();
    unique_ptr<Expr> ParseCondition ();
    unique_ptr<DeclareFunctionExpr> ParseFunctionDeclare ();
    unique_ptr<DeclareFunctionExpr> ParseAST (bool lessVerbose=false);

    
   void printTree (bool printNoNamedNodes=false, std::optional<TSNode> nodeInp = std::nullopt, int lvl=0);
   ~Parser ();
};

#endif