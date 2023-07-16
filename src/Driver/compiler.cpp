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
#include "Functions.hpp"
using namespace std;

int main(int argc, const char **argv)
{
    // assert that there is a valid argument
    bool lessVerbose = true;
    if (argc == 3 && std::strcmp("debug",argv[2])==0) {
        lessVerbose = false; 
    }
    else if (argc != 2)
    {
        throw invalid_argument("invalid argument ");
    }
    const char *filename = argv[1];

    CompilationContext ctx;
    if (!lessVerbose) printf("Starting...\n");

    // initialize ffi functions
    initializeAllFFIFunc(ctx);

    // start parsing actual file
    Parser pars(filename);
    if (!lessVerbose)
        pars.printTree(true);
    auto main_fn = pars.ParseAST();
    if (!lessVerbose) printf("============================= CodeGen =======================\n");
    
    auto fn = main_fn->codegen(ctx);
    if (!fn) throw invalid_argument("Invalid main function");
    error_code EC;
    
    raw_fd_ostream ofile("main.ll", EC);
    ctx.mod->print(ofile, nullptr);
    
    if (!lessVerbose) ctx.mod->print(errs(), nullptr);

    if (!lessVerbose) printf("================== Compiling to object File =================\n");
    bool res = verifyFunction(**fn, &errs());
    if (!lessVerbose) printf("Verify function (1 if successful else 0): %d\n", !res);

    if (!lessVerbose)
        printf("Converting to assembly...\n");
    system("llc --opaque-pointers main.ll");

    if (!lessVerbose)
        printf("Compiling...\n");
    system("clang -fPIE -fpie main.s");

    if (!lessVerbose)
        printf("Running Executable...\n");
    system("./a.out");
}   
