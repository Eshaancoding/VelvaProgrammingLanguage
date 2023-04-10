#include "AST.hpp"

string Expr::debug_info () { return "Parent Class Expr"; }
string IntExpr::debug_info() { return "Int Expr with value: " + to_string(num) + " and num bit: " + to_string(numBits); } 
string FloatExpr::debug_info() { return "Float Expr with value: " + to_string(decimal); } 
string VarUseExpr::debug_info() { return "Variable Use Expr with variable name " + var; }
string AssignExpr::debug_info() { return "Assign Expr with variable name " + varName + " and value " + value->debug_info(); }
string BinaryOpExpr::debug_info() { return "Binary Operation expr with LHS [" + LHS->debug_info() + "] and RHS [" + RHS->debug_info() + "] with operation: " + op; }
string StringExpr::debug_info() { return "String Expr with text: " + text; }
string ErrorExpr::debug_info() { return "Error Expr!"; }
string BlockExpr::debug_info() { return "Block expr"; }
string ForExpr::debug_info() { return "For loop"; }
string ReturnExpr::debug_info() { return "Return expr"; }

string BranchExpr::debug_info() {
    string s;
    for(auto &itr : ifMap) {
        // check if conditional exist
        if (get<0>(itr)) {
            // conditional does exist
            s += "Conditional: " + (*get<0>(itr))->debug_info() + "\n";
        }
        else {
            s += "No conditional\n";
        }
        /*
        for (int i = 0; i < itr.second.size(); i++) {
            s += string("Line ") + to_string(i+1) + " : " + itr.second[i]->debug_info() + "\n"; 
        }
        */
    }
    return s;
}

string WhileExpr::debug_info() {
    string s = "Cond: " + cond->debug_info() + "\nBody: \n";
    s += body->debug_info();
    return s;
}

string TernaryExpr::debug_info() {
    return _if->debug_info() + " ? " + then->debug_info() + " : " + _else->debug_info();
}

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
    string result = "Declare Function Expr with isPure: " + std::to_string(isPure) + " isExternal: " + std::to_string(isExternal) + " name: " + name + " and ";
    int num = 1;
    for (auto &f : params) {
        result += "Param " + to_string(num) + " with type " + get<0>(f) + " and name " + get<1>(f) + ", ";
        num++;
    }
    if (returnType)
        result += " return type: " + *returnType;
    else
        result += " return type: none!";

    return result;
}

string VarDeclareExpr::debug_info() {
    string result = "Var Declare Expr with name " + name;
    result += " and with multability type: ";
    if (mutType == VAR_MUTABILITY_VAR)
        result += "var";
    else
        result += "const";
    result += " and with value: [" + value->debug_info() + "]";

    return result;
}
