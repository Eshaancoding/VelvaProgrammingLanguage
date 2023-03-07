#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
// #include "Parser.hpp"
// #include <tree_sitter/api.h>


using namespace std;

int main () {
    printf("Hello world\n");
}

// int main (int argc, char** argv) {
//     Parser parser = Parser(argv[1]);
//     CompilationContext ctx;
//     auto main_fn = make_unique<DeclareFunctionExpr>(false, false, "_main", vector<tuple<string, string>>({}), nullopt);
//     while (true) {
//         int code = parser.getTypeCode()
//         if (code == 0) {
//             auto statement = parser.parseStatement();
//             if (statement) {
//                 main_fn->body.push_back(move(*statement));
//             }
//             else {
//                 printf("Something went wrong!!\n");
//                 break;
//             }
//         } 
//         else if (code == 1) {
//             auto function = parser.parseFunction();
//             if (function) {
//                 auto cg = (*function)->codegen(ctx);
//                 if (!cg)
//                     (*cg)->print(errs());
//                 else
//                     printf("Code gen function isn't working");
//             }
//             else {
//                 printf("Something went wrong!!\n");
//             }
//         }
//         else {
//             printf("Code exit with %d!!\n", code);
//             break; // there's an error!
//         }
//         if (parser.currentToken->isEOF()) break;
//     }
//     (*main_fn->codegen(ctx))->print(errs()); 
//     verifyFunction(*ctx.mod->getFunction("_main"), &llvm::errs());
//     // optimization 
//     ctx.compile();
//     printf("Successfully compiled!\n");
// }