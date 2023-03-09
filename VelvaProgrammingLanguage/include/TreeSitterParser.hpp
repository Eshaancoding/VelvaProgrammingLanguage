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
#include <stdio.h>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>
#include "TreeSitterCursor.hpp"

#define GENERAL_TYPE std::variant<vector<unique_ptr<Expr>>, unique_ptr<Expr>, unique_ptr<DeclareFunctionExpr>>

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
     * @brief Given the starting and ending point, we use the src string in order to return the string
    */
    std::string getStartingEnding (TSNode node);
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (const char* filename); 


    /**
     * @brief General Parser based on current node. For example, if the type of current node is a for, then it would call the for loop parser
     * @return can return various of types, so setting as a general parsed
     */
    GENERAL_TYPE ParseGeneral ();
    
    /**
     * @brief parse binary operation
     * 
    */    
   unique_ptr<Expr> ParseBinaryOp ();
    
    /**
     * @brief Parse Expression
    */
   unique_ptr<Expr> ParseExpression ();
    
    /**
     * @brief Parse while
    */
   unique_ptr<Expr> ParseWhile();

    /**
     * @brief Parse for loop
    */
   unique_ptr<Expr> ParseForLoop ();
    
    /**
     * @brief parses variable declaration
    */
    unique_ptr<Expr> ParseVarDecl ();
    
    /**
     * @brief Parses a block of text
     * 
     */
    vector<unique_ptr<Expr>> ParseBlock ();

    /**
     * @brief parses a function declare method 
     * 
     */
    std::unique_ptr<DeclareFunctionExpr> ParseFunctionDeclare ();


    /**
     * @brief parses the AST, starting from the original node, and converts to our custom AST
     * 
     */

    std::unique_ptr<DeclareFunctionExpr> ParseAST ();

    /**
     * @brief print the Tree from treesitter 
     * @param node the starting node. Default nullptr, will be set to the root node
    */
   void printTree (std::optional<TSNode> nodeInp = std::nullopt, int lvl=0);
 
    /**
     * @brief deconstructor for Parser, which will free objects such as parser and tree
    */
   ~Parser ();
};

#endif