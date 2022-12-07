#ifndef LEXER
#define LEXER

#include <ctype.h>
#include <sstream>
#include <stdio.h>
#include <memory>
#include <string>
#include <fstream>
#include "Token.hpp"

class Lexer {
private: 
    // File 
    std::ifstream file_read; 

    // Last char
    char LastChar;

    // Simple function to get char
    char getChar ();

    // variables to keep track during lexing for getting error messages
    std::string filename;
    std::string line;
    int line_num;
    int start_char_idx;  // keep track of the beginning of the word/phrase
    int char_idx; 
public:
    Lexer () = default;

    Lexer (char* filename) : 
        file_read(filename),
        LastChar(' '),
        filename(filename),
        line(""),
        line_num(1),
        start_char_idx(1),
        char_idx(1)
    {};

    unique_ptr<Token> getToken ();
    void log_err (std::string error_msg); // prints error based upon the character position
 
    // return private vars
    int get_integer ();
    double get_double_num ();

    // Helper func
    void print_token (int token); // should we create a class? naaaa
};

#endif