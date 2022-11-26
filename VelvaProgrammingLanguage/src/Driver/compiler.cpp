#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "Parser.hpp"
using namespace std;

int main (int argc, char** argv) {
    Parser parse = Parser(argv[1]);
    auto result = parse.MainParser();
    if (result) {
        printf("Everything right happened!\n");
    } else {
        printf("Something wrong happened :(\n");
    }
}

// int main (int argc, char** argv) {
//     Lexer lex = Lexer(argv[1]);
//     Token* currentToken = lex.getToken(); 
//     while (!currentToken->isEOF()) {
//         printf("Current token: %s\n", currentToken->to_str().c_str());
//         currentToken = lex.getToken(); 
//     }
// }