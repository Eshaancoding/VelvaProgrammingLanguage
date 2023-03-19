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
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Transforms/Scalar/InstSimplifyPass.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include <cmath>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Analysis/InstructionSimplify.h"
#include "llvm/IR/LegacyPassManager.h"

using namespace std;
using namespace llvm;
using namespace llvm::sys;
// IR generation variables

enum Types {
    INTEGER = 0,
    FLOAT = 1,
    BOOLEAN = 2,
};

class NameRegistry {
    private:
        map<string, int> names;
    public:
        string use(const string &prefix);
};

class BlockExpr;

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
        map<string, Function*> functions;
        //std::unique_ptr<FunctionPassManager> fpm;
        bool lessVerbose=false;
        NameRegistry names;
        CompilationContext();
        void compile();
        // ModulePassManager setOptimize(ModuleAnalysisManager& MAM);
        //void defaultOptimize();
};

/**
 * @brief The base class for all AST variables.
 * Expr is the base class for all AST nodes. It provides fundamental methods and types.
 */
class Expr {
    public:
        virtual ~Expr() = default;
        Expr() {};
        
        // ~Expr() = default; // Why do we needs a deconstructor for EXPR????
        /**
         * @brief This function generates code for the AST node.
         * e compilation context to generate code for.
         * @return Val
         * @param ctx Thue* Returns the code generated.
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

// not implemented yet, just wondering if arrays would be something we want to implement in the future
// class ArrayExpr : public Expr {
//     public:
//         vector<unique_ptr<Expr>> arr; // for now this is only being used for a string implementation, any-type arrays will be added later ig
//         Types type;
//         ArrayExpr(vector<unique_ptr<Expr>> arr) : arr(move(arr)), type(type) {};
//         optional<Value*> codegen(CompilationContext &ctx) override;
//         string debug_info() override;
//         string return_type() override;
// };

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

class DeclareFunctionExpr;

class BlockExpr : public Expr {
    private:
        int counter = 0;
        map<int, unique_ptr<Expr>> expr_map;
        map<int, unique_ptr<DeclareFunctionExpr>> function_map; 
    public: 
        BlockExpr () = default;
        void add (unique_ptr<Expr> expr); 
        void add (vector<unique_ptr<Expr>> expr); 
        void add (unique_ptr<DeclareFunctionExpr> func);   
        string return_type () override;
        string debug_info () override;
        optional<Value*> codegen (CompilationContext &ctx) override;
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
        optional<unique_ptr<BlockExpr>> body;

        DeclareFunctionExpr(
            bool isExternal, 
            bool isPure, 
            string name, 
            vector<tuple<string, string> > params, 
            optional<string> returnType, 
            optional<unique_ptr<BlockExpr>> body // <-- should be block expr
        ) : isPure(isPure), name(name), params(params), returnType(returnType), isExternal(isExternal), body(move(body)) {};
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
        string return_type () override;
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
         *        */
        string var;
        VarUseExpr(string var) : var(var) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
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
        string type;
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
        // defined in BinaryOpIrGen.cpp
        VarDeclareExpr(VarMutability mutTypeArg, string nameArg, unique_ptr<Expr> valueArg, optional<string> typeArg);
        void alloc(CompilationContext &ctx);
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
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
        string return_type() override;
};

class BranchExpr: public Expr {
    public:
        /**
        * @brief first argument in the map is the conditional statement (if it's null, then it's an else statement)
        * the other argument: vector<Expr> is the body of the if statement 
        */
        vector<tuple<optional<unique_ptr<Expr>>, unique_ptr<Expr>>> ifMap;
        BranchExpr(vector<tuple<optional<unique_ptr<Expr>>, unique_ptr<Expr>>> ifmaps) : ifMap(move(ifmaps)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
};

class ForExpr : public Expr {
    public:
        // for (int i = 3; i < 6; i++)
        unique_ptr<Expr> varDecl; // i = 3;
        unique_ptr<Expr> condition; // i < 6;
        unique_ptr<Expr> operation; // i++
        unique_ptr<BlockExpr> body;

        ForExpr(unique_ptr<Expr> varDecl, unique_ptr<Expr> condition, unique_ptr<Expr> operation, unique_ptr<BlockExpr> body) : varDecl(move(varDecl)), condition(move(condition)), operation(move(operation)), body(move(body)) {}

        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
};


// ex: i == 3 ? 0 : 1
class TernaryExpr: public Expr {
    public:
        unique_ptr<Expr> _if, then, _else;

        TernaryExpr(unique_ptr<Expr> _if, unique_ptr<Expr> then, unique_ptr<Expr> _else) : _if(move(_if)), then(move(then)), _else(move(_else)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
};

class WhileExpr: public Expr {
    public:
        /**
         * @brief While loop condition
         * 
         */
        unique_ptr<Expr> cond;
        /**
         * @brief While loop body
         * 
         */
        unique_ptr<Expr> body;

        WhileExpr(unique_ptr<Expr> cond, unique_ptr<Expr> body) : cond(move(cond)), body(move(body)) {};
        optional<Value*> codegen(CompilationContext &ctx) override;
        string debug_info() override;
        string return_type() override;
};

/**
 * @brief Returns
 * 
 */
class ReturnExpr : public Expr {
    public: 
        /**
         * @brief The return value
         * 
         */
        optional<unique_ptr<Expr>> val;

        ReturnExpr (optional<unique_ptr<Expr>> val) : val(move(val)) {};
        optional<Value*> codegen (CompilationContext &ctx ) override; 
        string debug_info() override;
        string return_type() override;
};

#endif