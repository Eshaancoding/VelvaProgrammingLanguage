#include "llvm/IR/Constants.h"
#include "llvm/ADT/APInt.h"
#include "llvm/ADT/APFloat.h"

#include "AST.hpp" 
StringExpr :: StringExpr (string t) { text.push_back(t); }