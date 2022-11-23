#include "AST.hpp"

string Expr::debug_info () { return "Parent Class Expr"; }
string IntExpr::debug_info() { return "Int Expr with value: " + to_string(num) + " and num bit: " + to_string(numBits); } 
string FloatExpr::debug_info() { return "Float Expr with value: " + to_string(decimal); } 
string VarUseExpr::debug_info() { return "Variable Use Expr with variable name + " + var; }
string AssignExpr::debug_info() { return "Assign Expr with variable name " + varName + " and value " + value->debug_info(); }
string ErrorExpr::debug_info() { return "Error Expr!"; }

string CallFuncExpr::debug_info() { 
    string result = "Call Func Expr with function name " + functionName + " and ";
    int num = 1;
    for (auto &f : params) {
        result += "Param " + to_string(num) + " [" + f->debug_info() + "], ";
        num++;
    }
    return result;
}

string DeclareFunctionExpr::debug_info() {
    string result = "Declare Function Expr with isPure: " + std::to_string(isPure) + " name: " + name + " and ";
    int num = 1;
    for (auto &f : params) {
        result += "Param " + to_string(num) + " with type " + get<0>(f) + " and name " + get<1>(f) + ", ";
        num++;
    }
    return result;
}

string StringExpr::debug_info() {
    string result = "String Expr of value ";
    for (auto &f : text) {
        if (auto output = std::get_if<std::unique_ptr<Expr>>(&f)) {
            result += "[" + (*output)->debug_info(); + "] ";
        } else {
            result += std::get<string>(f) + " ";
        }
    }
    return result;
}

string VarDeclareExpr::debug_info() {
    string result = "Var Declare Expr with name " + name;
    if (type)
        result += " with type " + *type;
    result += " and with multability type: ";
    if (mutType == VAR_MUTABILITY_VAR)
        result += "var";
    else
        result += "const";

    return result;
}