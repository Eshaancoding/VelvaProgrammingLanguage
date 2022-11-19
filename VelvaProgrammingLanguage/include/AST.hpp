#include <map>
#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
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
        
        CompilationContext() {
            context = std::make_unique<LLVMContext>();
            mod = std::make_unique<Module>("mod", *context);
            builder = std::make_unique<IRBuilder<>>(*context);
        };
};

/**
 * @brief The base class for all AST variables.
 * Expr is the base class for all AST nodes. It provides fundamental methods and types.
 */
class Expr {
    public:
        virtual ~Expr();
        /**
         * @brief This function generates code for the AST node.
         * 
         * @param ctx The compilation context to generate code for.
         * @return Value* Returns the code generated.
         */
        virtual Value *codegen(CompilationContext &ctx) = 0;
        // virtual optional<Value*> generate_str(CompilationContext &ctx) = 0;
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
        int numBits;
        IntExpr(int i) : num(i) {};
        Value *codegen(CompilationContext &ctx) override; 
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
        Value *codegen(CompilationContext &ctx) override;
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
        vector<Expr> params;
        CallFuncExpr(string name, vector<Expr> params) : functionName(name), params(params) {};
        Value *codegen(CompilationContext &ctx) override;
};

/**
 * @brief An AST node representing a function prototype.
 * 
 */
class DeclareFunctionExpr : public Expr {
    public:
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
        optional<string> returnType;
        DeclareFunctionExpr(bool isPure, string name, vector<tuple<string, string> > params, optional<string> returnType) : isPure(isPure), name(name), params(params), returnType(returnType) {} ;
        Function *codegen(CompilationContext &ctx) override;
};

/**
 * @brief Error Expr for errors on code 
 * 
 */
class ErrorExpr: public Expr {
    public:     
        int line;
        string file;
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
        vector<variant<string, unique_ptr<Expr> > text;
        StringExpr(string t) : text(vector<variant<string, unique_ptr<Expr>>>(t)) {}
        StringExpr(vector<variant<string, unique_ptr<Expr> > t) : text(t) {}            
        Value *codegen(CompilationContext &ctx) override;    
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
        Value *codegen(CompilationContext &ctx) override;
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
 */
class VarDeclareExpr {
    public:
        /**
         * @brief Represents the mutability protections of the variable
         * 
         */
        VarMutability mutType;
        /**
         * @brief The type; if nullopt, then use type inference/
         * 
         */
        optional<string> type;
        /**
         * @brief The name of the variable to be declared/.
         * 
         */
        string name;
        /**
         * @brief The right hand expression representing the value.
         * 
         */
        unique_ptr<Expr> value;
        VarDeclareExpr(VarMutability mutType, string name, unique_ptr<Expr> value, optional<string> type = nullopt) : mutType(mutType), name(name), value(move(value)), type(type) {};
        void alloc(CompilationContext &ctx);
};

/**
 * @brief An AST node representing variable assignment.
 * 
 */
class AssignExpr {
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
        Value *codegen(CompilationContext &ctx);
};