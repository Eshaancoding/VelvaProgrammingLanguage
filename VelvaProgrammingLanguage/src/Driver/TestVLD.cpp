#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <string>
#include <stdio.h>
#include "TreeSitterParser.hpp"
#include "AST.hpp"
#include "TestRunner.hpp"
using namespace std;

const string prefix = "../tests/";

std::string exec(string cmd, string inp="") {
    std::array<char, 128> buffer;
    std::string result;
    if (inp != "") {
        std::unique_ptr<FILE, decltype(&pclose)> outputPipe(popen(cmd.c_str(), "w"), pclose);
        if (!outputPipe) throw std::runtime_error("popen() failed!");
        fputs(inp.c_str(), outputPipe.get());
    }

    std::unique_ptr<FILE, decltype(&pclose)> inputPipe(popen(cmd.c_str(), "r"), pclose);
    if (!inputPipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), inputPipe.get()) != nullptr) {
        result += buffer.data();
    }
    printf("Result: %s\n", result.c_str());
    return result;
}

string getResult (string filepath, string inp="") {
    CompilationContext ctx;
    Parser parse((prefix + filepath).c_str());
    auto main_fn = parse.ParseAST();
    auto fn = main_fn->codegen(ctx);
    if (!fn) throw invalid_argument("Invalid main function");
    ctx.compile();
    system("clang output.o");
    return exec("./a.out", inp);
}

int main (int argc, char** argv) {
    TestSuite suite("The Barkshaan Test Suite");
    
    // test suites
    // suite.add([](){check(getResult("test.vld")=="");}, "test.vld Test Case");
    suite.add([](){check(getResult("put.vld", "a\r")=="a");}, "printf.vld Test Case");

    suite.run();
}