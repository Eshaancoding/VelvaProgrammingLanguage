#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "TreeSitterParser.hpp"
#include "AST.hpp"
#include "TestRunner.hpp"
using namespace std;

int main (int argc, char** argv) {
    TestSuite suite("The Barkshaan Test Suite");
    suite.add([]() {
        Parser parse("test.vld");
        auto result = parse.ParseAST();
        check(2+2==5, "Dogshaan screwed up");
    }, "The Barkshaan Test Case");
    suite.run();
}