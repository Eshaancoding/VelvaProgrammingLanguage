#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "Parser.hpp"


using namespace std;

int main (int argc, char** argv) {
    Parser parser = Parser(argv[1]);
    CompilationContext ctx;
    auto main_fn = make_unique<DeclareFunctionExpr>(false, false, "_main", vector<tuple<string, string>>({}), nullopt);
    while (true) {
        int code = parser.getTypeCode();
        if (code == 0) {
            auto statement = parser.parseStatement();
            if (statement) {
                printf("Statement AST: %s\n", (*statement)->debug_info().c_str());
                main_fn->body.push_back(move(*statement));
            }
            else {
                printf("Something went wrong!!\n");
                break;
            }
        } 
        else if (code == 1) {
            auto statement = parser.parseFunction();
            if (statement) {
                printf("Statement AST: %s\n", (*statement)->debug_info().c_str());
                // main_fn->body.push_back(move(*statement));
                printf("IR main function not implemented!\n");
                break;
            }
            else {
                printf("Something went wrong!!\n");
                break;
            }
        }
        else {
            printf("Code exit with %d!!\n", code);
            break; // there's an error!
        }
        parser.printCurrentToken();
        if (parser.currentToken->isEOF()) break;
    }
    (*main_fn->codegen(ctx))->print(errs()); 
    verifyFunction(*ctx.mod->getFunction("_main"), &llvm::errs());
    // optimization 
    ctx.compile();
    printf("Successfully compiled!\n");
}