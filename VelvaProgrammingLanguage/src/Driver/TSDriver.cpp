#include <iostream>
#include <fstream>
#include <string>
#include <functional>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>
#include <cassert>
#include <memory>
#include <cstring>
#include "TreeSitterParser.hpp"
using namespace std;

int main(int argc, const char **argv)
{
    // assert that there is a valid argument
    if (argc != 2)
    {
        throw invalid_argument("invalid argument");
    }
    const char *filename = argv[1];

    Parser pars(filename);
    pars.printTree(true);
    pars.ParseAST();
}   
