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
#include "AST.hpp"
using namespace std;

int main(int argc, const char **argv)
{
    // assert that there is a valid argument
    if (argc != 2)
    {
        throw invalid_argument("invalid argument");
    }
    const char *filename = argv[1];

    CompilationContext ctx;
    Parser pars(filename);
    pars.printTree(true);
    auto x = DeclareFunctionExpr(
        true,
        false,
        EXIT_SYMBOL,
        (vector<tuple<string, string>>) { {"int", "code"}},
        std::nullopt,
        std::nullopt
    ).codegen(ctx);
    (*x)->print(errs());
    auto main_fn = pars.ParseAST();
    printf("============================= CodeGen =======================\n");
    
    auto fn = main_fn->codegen(ctx);
    if (!fn) throw invalid_argument("Invalid main function");
    (*fn)->print(errs()); 

    printf("================== Compiling to object File =================\n");
    verifyFunction(**fn, &llvm::errs());
    ctx.compile();
    printf("Successfully compiled!\n");
}   
