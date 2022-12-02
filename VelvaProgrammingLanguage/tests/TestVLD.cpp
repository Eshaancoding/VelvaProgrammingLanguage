#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
#include "Parser.hpp"
#include "TestRunner.hpp"
using namespace std;

int main (int argc, char** argv) {
    TestSuite suite("The Barkshaan Test Suite");
    suite.add([]() {
        Parser parse = Parser("test.vld");
        auto result = parse.MainParser();
        result->
        require(result, "Something wrong happened");
    }, "The Barkshaan Test Case");
    suite.run();
}