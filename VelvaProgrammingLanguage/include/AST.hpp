#ifndef AST
#define AST

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
#include <functional>
#include <variant>
#include "Functions.hpp"
#include "Utils.hpp"
#include "llvm-c/Core.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h" 
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/Value.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include <cmath>
#include "Utils.hpp"
using namespace std;
using namespace llvm;

// IR generation variables

/**
 * @brief This object stores variables for a compilation context. Only use this once per compile task.
 * 
 */
struct CompilationContext {
    public:
        std::unique_ptr<LLVMContext> context;
        std::unique_ptr<IRBuilder<>> builder;
        std::unique_ptr<Module> mod;
        map<string, AllocaInst*> namedValues;
        NameRegistry names;

        CompilationContext(bool createOFile = true);
};

/**
 * @brief The base class for all AST variables.
 * Expr is the base class for all AST nodes. It provides fundamental methods and types.
 */
class Expr {
    public:
        // ~Expr() = default; // Why do we needs a deconstructor for EXPR????
        /**
         * @brief This function generates code for the AST node.
         * 
         * @param ctx The compilation context to generate code for.
         * @return Value* Returns the code generated.
         */
        virtual optional<Value*> codegen(CompilationContext &ctx);
        // virtual std::optional<Value*> generate_str(CompilationContext &ctx);

        /**
         * @brief A function that returns the information about the AST node itself.
         *
         * 
        */
        virtual string debug_info(); 

        /**
         * @brief String type that specifies the type of the Expression (will be override)
        */
       virtual string return_type (); 
};

/**
 * @brief An AST node that represents an int literal
 * 
 */
class IntExpr : public Expr {
    public:
        /**
         * @brief The value of the literal.
         * 
         */
        int num;
        unsigned int numBits;
        IntExpr(int i) : num(i), numBits(32) {}; // defaults to 32 for int
        optional<Value*> codegen(CompilationContext &ctx) override; 
        string debug_info () override;
        string return_type () override; // just returns string, declared in AST Constructors.cpp
};

/**
 * @brief An AST node that represents a float literal.
 * 
 */
class FloatExpr : public Expr {
    public:
        /**
        * @brief The value of the decimal.
        * 
        */
        float decimal;
        public: FloatExpr(float d) : decimal(d) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type () override; 
};

/**
 * @brief An AST node that represents a function call.
 * 
 */
class CallFuncExpr : public Expr {
    public:
        /**
         * @brief The name of the function to be called.
         * 
         */
        string functionName;
        /**
         * @brief The parameters of the function to be called.
         * 
         */
        vector<unique_ptr<Expr>> params;
        CallFuncExpr(string name, vector<unique_ptr<Expr>> params) : functionName(name), params(std::move(params)) {};
        std::optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type () override; 
};

/**
 * @brief An Binary Operation node representing +, /, -, etc. operations between various types
 * 
 */
class BinaryOpExpr : public Expr {
    public: 
        /**
         * @brief operation used. Could be <= or >= as well (that's why represented as string)
        */
        string op; 

        /**
         * @brief Left hand side and right hand side of the operation represented as Expr
        */
        unique_ptr<Expr> LHS, RHS;

        /**
         * @brief stores the type information (string, int, char, double, int, etc.)
         */
        string rt;

        BinaryOpExpr (string op, unique_ptr<Expr> LHS, unique_ptr<Expr> RHS, string result_type) : op(op), LHS(move(LHS)), RHS(move(RHS)), rt(result_type) {}
        std::optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
};

/**
 * @brief An AST node representing a function prototype.
 * 
 */
class DeclareFunctionExpr {
    public:
        /**
         * @brief Whether or not the function is from FFI (external functions declared in C++ but can be used in our lang) or not .
         */
        bool isExternal;
        /**
         * @brief Whether the function is pure or not.
         * This is true when the function is declared with the pure keyword, and false when declared with the func keyword.
         */
        bool isPure;
        /**
         * @brief The name of the function to be declared
         * 
         */
        string name;
        /**
         * @brief The parameters this function accepts.
         * This is structured as a list of pair of strings. The first represents the type, and the second represents the variable name.
         */
        vector<tuple<string, string> > params;
        /**
         * @brief This represents the return type of the function. 
         * This is nullopt when there the return type is void.
         */
        optional<std::string> returnType;
        bool isReal = true;
        vector<unique_ptr<Expr>> body;
        DeclareFunctionExpr(bool isExternal, bool isPure, string name, vector<tuple<string, string> > params, optional<string> returnType) : isPure(isPure), name(name), params(params), returnType(returnType), isExternal(isExternal) {} ;
        optional<Function*> codegen(CompilationContext &ctx);
        string debug_info();
        string return_type (); 
};


/**
 * @brief Error Expr for errors on code 
 * 
 */
class ErrorExpr: public Expr {
    public:     
        ErrorExpr() {}; 
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};

/**
 * @brief Represents a string literal
 * 
 */
class StringExpr: public Expr {
    public:
        /**
        * @brief This is a list of variants of either a string literal, or a format value inserted with the ${} syntax.
        * 
        */
        string text;
        StringExpr(string t) : text(t) {} // Defined in  AST.cpp
        optional<Value*> codegen(CompilationContext &ctx) override;    
        string debug_info() override;
        string return_type() override;
};

/**
 * @brief Represents a variable use
 * 
 */
class VarUseExpr : public Expr {
    public:
        /**
         * @brief The variable used
         * 
         */
        string var;
        VarUseExpr(string var) : var(var) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};
//didn't we have more mutability types before, we'll add more later.
/**
 * @brief This represents the various mutability protections of a variable.
 * 
 */
typedef enum {
    /**
     * @brief This variable can be mutated; represents the `var` keyword
     * 
     */
    VAR_MUTABILITY_VAR,
    /**
     * @brief This variable cannot be mutated; represents the `const` keyword
     * 
     */
    VAR_MUTABILITY_CONST,
} VarMutability;
 
/**
 * @brief An AST node that represents a variable declaration
 * 
 *

you know what daniel. Great job. Stupendous job.
it's kidna cool you know a little bit about phsyciology though.
*/
class VarDeclareExpr : public Expr { 
    public:
        /**
         * @brief Represents the mutability protections of the variable
         * 
         */
        VarMutability mutType;
        /**
         * @brief The type; if nullopt, then use type inference.
         * 
         */
        optional<string> type;
        /**
         * @brief The name of the variable to be declared.
         * 
         */
        string name;
        /**
         * @brief The right hand expression representing the value.
         * 
         */
        unique_ptr<Expr> value;
        VarDeclareExpr(VarMutability mutType, string name, unique_ptr<Expr> value, optional<string> type) : mutType(mutType), name(name), value(std::move(value)), type(type) {};
        void alloc(CompilationContext &ctx);
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};

/**
 * @brief An AST node representing variable assignment.
 * 
 */
class AssignExpr : public Expr {
    public:
        /**
         * @brief The name of the variable to be changed.
         * 
         */
        string varName;
        /**
         * @brief The right hand expression representing the new value.
         * 
         */
        unique_ptr<Expr> value;
        AssignExpr(string name, unique_ptr<Expr> value) : varName(name), value(move(value)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};

class BranchExpr: public Expr {
    public:
        /**
        * @brief first argument in the map is the conditional statement (if it's null, then it's an else statement)
        * the other argument: vector<Expr> is the body of the if statement 
        */
        map<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>> ifMap;

        BranchExpr(map<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>> ifmaps) : ifMap(move(ifmaps)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};

class ForExpr : public Expr {
    public:
        optional<unique_ptr<Expr>> Start, End, Step, Body;

        ForExpr(optional<unique_ptr<Expr>> Start, optional<unique_ptr<Expr>> End,
        optional<unique_ptr<Expr>> Step, optional<vector<unique_ptr<Expr>>> Body) : 
        Start(move(Start)), End(move(End)), Step(move(Step)), Body(move(Body)) {};

        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
}


// ex: i == 3 ? 0 : 1
class TernaryExpr: public Expr {
    public:
        unique_ptr<Expr> _if, then, _else;

        TernaryExpr(unique_ptr<Expr> _if, unique_ptr<Expr> then, unique_ptr<Expr> _else) : _if(move(_if)), then(move(then)), _else(move(_else)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
};

class WhileExpr: public Expr {
    public:
        unique_ptr<Expr> cond;
        vector<unique_ptr<Expr>> body;

        WhileExpr(unique_ptr<Expr> cond, vector<unique_ptr<Expr>> body) : cond(cond), body(body) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
}
#endif