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
    bool lessVerbose = false;
    if (argc == 3) {
        lessVerbose = true; 
    }
    else if (argc != 2)
    {
        throw invalid_argument("invalid argument");
    }
    const char *filename = argv[1];

    CompilationContext ctx;
    ctx.lessVerbose = lessVerbose;
    Parser pars(filename);
    if (!lessVerbose)
        pars.printTree(true);
    // auto x = DeclareFunctionExpr(
    //     true,
    //     false,
    //     EXIT_SYMBOL,
    //     (vector<tuple<string, string>>) { {"int", "code"}},
    //     std::nullopt,
    //     std::nullopt
    // ).codegen(ctx);
    // (*x)->print(errs());
    auto main_fn = pars.ParseAST();
    if (!lessVerbose) printf("============================= CodeGen =======================\n");
    
    auto fn = main_fn->codegen(ctx);
    if (!fn) throw invalid_argument("Invalid main function");
    error_code EC;
    
    raw_fd_ostream ofile("dog.ll", EC);
    ctx.mod->print(ofile, nullptr);

    if (!lessVerbose)
        (*fn)->print(errs()); 

    if (!lessVerbose) printf("================== Compiling to object File =================\n");
    verifyFunction(**fn, &llvm::errs());
    ctx.compile();
    if (!lessVerbose)
        printf("Successfully compiled!\n");

    system("clang -fPIE -fpie output.o");
    if (!lessVerbose)
        printf("Successfully linked. Running executable...\n");

    system("./a.out");
}   
