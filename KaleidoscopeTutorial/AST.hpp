#ifndef AST
#define AST 
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include "Lexer.cpp"
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
using namespace llvm;

// LLVMContext stores global data of LLVM core infrastructure, type and constant uniquing tables, no locking on thread, so one context per thread
LLVMContext Context;
IRBuilder<> Builder(Context);
// top level container of IR values
std::unique_ptr<Module> TheModule;
std::map<std::string, Value *> NamedValues;

void InitializeModule();

class ExprAST {
public: 
    virtual ~ExprAST() = default;
    virtual void print () {printf("Base Class EXPR AST\n");}
    virtual Value *codegen() = 0;
};

// Just storing the number
class NumberExprAST : public ExprAST {
    double Val; 
public: 
    NumberExprAST(double Val) : Val(Val) {}
    void print () override {printf("Number EXPR AST with Val: %f \n", Val);}
    Value *codegen() override;
};

/// VariableExprAST - Expression class for referencing a variable, like "a".
class VariableExprAST : public ExprAST {
  std::string Name;
public:
  VariableExprAST(const std::string &Name) : Name(Name) {}
  void print () override {printf("Variable EXPR AST with variable name: %s\n", Name.c_str());}
  Value *codegen() override;
};

/// BinaryExprAST - Expression class for a binary operator.
class BinaryExprAST : public ExprAST {
  char Op; // could be stuff like *, /, +, etc.
  std::unique_ptr<ExprAST> LHS, RHS; 
  
  // LHS or RHS can be any "VariableExprAST", "NumberExprAST", etc.
  // Also note that unique ptr provides garbage collection, so I love that.
  
public:
  BinaryExprAST(char op, std::unique_ptr<ExprAST> LHS,
                std::unique_ptr<ExprAST> RHS)
    : Op(op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
    // apparently this "move" functionality moves the pointer from one argument to another, so that the original can be overwritten in memory from the compiler later, because WE LOVE COMPILERS ahhhhhhhhhh 
  void print () override {
    printf("Binary EXPR AST with op: %c\n", Op);
  }
  Value *codegen() override;
};

//************************ FUNCTIONS ***********************//

/// CallExprAST - Expression class for function calls. ex: plus(1,2), whe
class CallExprAST : public ExprAST {
  std::string Callee; // The name of the function
  std::vector<std::unique_ptr<ExprAST>> Args; // the arguments to the function

public:
  CallExprAST(const std::string &Callee,
              std::vector<std::unique_ptr<ExprAST>> Args)
    : Callee(Callee), Args(std::move(Args)) {}
  void print () override {
    printf("Call Expr (calling functions) AST with Callee %s\n", Callee.c_str());
  } 
  Value *codegen() override;
};

// Stores the function name and the arguments names
class PrototypeAST {
  std::string Name;
  std::vector<std::string> Args;

public:
  PrototypeAST(const std::string &name, std::vector<std::string> Args)
    : Name(name), Args(std::move(Args)) {}
    // I guess std::move is just another way to add something to a vector maybe.

  const std::string &getName() const { return Name; }
  void print () {
    printf("Prototype Function with name %s\n",Name.c_str());
  }
  Function *codegen();
};

/// FunctionAST - This class represents a function definition itself.
class FunctionAST {
  std::unique_ptr<PrototypeAST> Proto; // Stores the function name and arguments
  std::unique_ptr<ExprAST> Body; // The actual function itself!

public:
  FunctionAST(std::unique_ptr<PrototypeAST> Proto,
              std::unique_ptr<ExprAST> Body)
    : Proto(std::move(Proto)), Body(std::move(Body)) {}
  void print () {
    printf("Function AST");
  }
  Function *codegen();
};

#endif