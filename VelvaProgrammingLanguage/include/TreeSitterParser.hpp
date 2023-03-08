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
#include <stdio.h>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>

extern "C"
{
    const TSLanguage *tree_sitter_Velva(void);
}

class Parser {
private:
    TSParser *parser;
    TSTree *tree;
public: 
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (const char* filename); 


    /**
     * @brief parses the AST, starting from the original node
     * 
     */

    void ParseAST ();

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