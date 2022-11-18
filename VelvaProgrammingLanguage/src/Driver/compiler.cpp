#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "Lexer.hpp"
using namespace std;

int main (int argc, char** argv) {
    Lexer lexer = Lexer(argv[1]); // pass in the file name
    Token *token = lexer.getToken();
    while (!token->isEOF() && !token->isErr()) {
        printf("%s\n", token->to_str().c_str());
        token = lexer.getToken();
    }
}