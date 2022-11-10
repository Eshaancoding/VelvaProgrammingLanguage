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

// Base Class
class ExprAST {
public: 
    virtual ~ExprAST() {};
    virtual void print () {printf("Base Class EXPR AST\n");}
};

// Just storing the number
class NumberExprAST : public ExprAST {
    double Val; 
public: 
    NumberExprAST(double Val) : Val(Val) {}
    void print () {printf("Number EXPR AST with Val: %f \n", Val);}
};

/// VariableExprAST - Expression class for referencing a variable, like "a".
class VariableExprAST : public ExprAST {
  std::string Name;
public:
  VariableExprAST(const std::string &Name) : Name(Name) {}
  void print () {printf("Variable EXPR AST with variable name: %s\n", Name.c_str());}
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
  void print () {
    printf("Binary EXPR AST with op: %c\n", Op);
  }
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
  void print () {
    printf("Call Expr (calling functions) AST with Callee %s\n", Callee.c_str());
  }
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
};

#endif