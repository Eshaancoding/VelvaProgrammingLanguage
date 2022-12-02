#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "Parser.hpp"
using namespace std;

int main (int argc, char** argv) {
    Parser parser = Parser(argv[1]);
    while (true) {
        int code = parser.getTypeCode();
        if (code == 0) {
            auto statement = parser.parseStatement();
            if (statement) {
                
            }
            else printf("Something went wrong!!\n");
        } 
        else if (code == 1) {
            auto statement = parser.parseFunction();
            if (statement) {
                printf("Function AST: %s\n", (*statement)->debug_info().c_str());
            }
            else printf("Something went wrong!!\n");
        }
        parser.printCurrentToken();
        if (parser.currentToken->isEOF()) break;
    }
}

// Token code
// int main (int argc, char** argv) { //     Lexer lex = Lexer(argv[1]);
//     Token* currentToken = lex.getToken(); 
//     while (!currentToken->isEOF()) {
//         printf("Current token: %s\n", currentToken->to_str().c_str());
//         currentToken = lex.getToken(); 
//     }
// }