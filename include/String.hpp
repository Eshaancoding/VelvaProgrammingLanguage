#ifndef STRING_HPP
#define STRING_HPP 

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
#include <functional>
#include <variant>

#include "AST.hpp"
#include "CompilationContext.hpp"

class String {
private:
    bool didGenHelper;
    StructType* str;
    PointerType* strPtr;

    void defaultStringGen (CompilationContext &ctx);
    void stringDelete (CompilationContext &ctx);
    void stringResize (CompilationContext &ctx);
    void AddChar (CompilationContext &ctx);
    void setChar (CompilationContext &ctx);
public:
    String () : didGenHelper(false), str(nullptr) {};

    // include in IR helper functions such as string and such;
    void genStringHelper (CompilationContext &ctx);

    StructType* getStr () { return str; };
};

#endif