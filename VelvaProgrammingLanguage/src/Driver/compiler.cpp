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