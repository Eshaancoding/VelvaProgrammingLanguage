#include "llvm/IR/Constants.h"
#include "llvm/ADT/APInt.h"

#include "AST.hpp"
using namespace llvm;

Value *IntExpr::codegen() {
    return ConstantInt::get(Context, APInt(num));
}