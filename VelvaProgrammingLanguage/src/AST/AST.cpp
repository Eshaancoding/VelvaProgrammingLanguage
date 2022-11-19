#include "llvm/IR/Constants.h"
#include "llvm/ADT/APInt.h"
#include "llvm/ADT/APFloat.h"

#include "AST.hpp"



Value *DecimalExpr::codegen() {
    return ConstantFP::get(Context, APFloat(decimal));
}

Value *CallFuncExpr::codegen() {

}

Value *DeclareFunctionExpr::codegen() {

}

Value *StringExpr::codegen() {
    for()
}

Value *VarUseExpr::codegen() {

}

Value *VarDeclareExpr::codegen() {

}