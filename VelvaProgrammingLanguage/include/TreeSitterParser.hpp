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
#include <stdio.h>

class Parser {
public: 
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (char* filename); 


    /**
     * @brief parses the AST, starting from the original node
     * 
     */

    void ParseAST ();
};

#endif