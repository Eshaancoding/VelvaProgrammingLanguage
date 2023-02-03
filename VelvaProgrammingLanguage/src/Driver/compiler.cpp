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
    vector<string> functionNames = {"_start"};
    auto main_fn = make_unique<DeclareFunctionExpr>(false, false, functionNames[0], vector<tuple<string, string>>({}), nullopt);
    bool did_succeed = true;
    while (true) {
        int code = parser.getTypeCode();
        if (code == 0) {
            auto statement = parser.parseStatement();
            if (statement) {
                main_fn->body.push_back(move(*statement));
            }
            else {
                did_succeed = false;
                printf("Something went wrong!!\n");
                break;
            }
        } 
        else if (code == 1) {
            auto function = parser.parseFunction();
            if (function) {
                auto cg = (*function)->codegen(ctx);
                if (cg) {
                    (*cg)->print(errs());
                    functionNames.push_back((*function)->name);
                }
                else {
                    did_succeed = false;
                    printf("\nCode gen function isn't working\n");
                    break;
                }
            }
            else {
                printf("Something went wrong!!\n");
                did_succeed = false;
            }
        }
        else {
            printf("Code exit with %d!!\n", code);
            did_succeed = false;
            break; // there's an error!
        }
        if (parser.currentToken->isEOF()) break;
    }
    if (did_succeed) {
        (*main_fn->codegen(ctx))->print(errs()); 
        for (auto fn : functionNames) {
            verifyFunction(*ctx.mod->getFunction(fn), &llvm::errs());
        }
        // optimization 
        ctx.compile();
        printf("Successfully compiled!\n");

        // linker
        int errCode = system("ld output.o");
        if (errCode == 0) printf("Successfully linked\n");
    }
}