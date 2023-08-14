#include "AST.hpp" 


// helper function
string convertToCPPType (string ty) {
    if (ty.size() > 5) {
        if (ty.substr(0, 4) == "ptr<") 
            return convertToCPPType(ty.substr(4, ty.size()-5))+"*";

        if (ty.substr(0, 4) == "ref<") 
            return convertToCPPType(ty.substr(4, ty.size()-5))+"&";
    }

    return ty;
}

string Expr::returnOpenCLStr () { return ""; }

// ======================== TYPES ======================== 
string IntExpr :: returnOpenCLStr () { return to_string(num); }
string FloatExpr :: returnOpenCLStr () { return to_string(decimal); }
string DoubleExpr :: returnOpenCLStr () { return to_string(decimal); }
string CharExpr :: returnOpenCLStr () { string ret = "\'"; ret += character; return ret + "\'"; }

// ======================== EXPRESSIONS ======================== 
string BinaryOpExpr :: returnOpenCLStr () { return "(" + LHS->returnOpenCLStr() + op + RHS->returnOpenCLStr() + ")"; }
string VarUseExpr :: returnOpenCLStr () { return var; }
string PointerExpr :: returnOpenCLStr () { return "&" + name; }
string TernaryExpr :: returnOpenCLStr () { return _if->returnOpenCLStr() + " ? " + then->returnOpenCLStr() + " : " + _else->returnOpenCLStr();}
string ReturnExpr :: returnOpenCLStr () { return "return" + (val ? " " + (*val)->returnOpenCLStr() : "") + ";";}
string WhileExpr :: returnOpenCLStr () { return "while " + cond->returnOpenCLStr() + body->returnOpenCLStr(); }


string AssignExpr :: returnOpenCLStr () { 
    string ret = varName;
    for (int i = 0; i < v.size(); i++)  
        ret += '[' + v[i]->returnOpenCLStr() + ']';
    
    ret += " = " + value->returnOpenCLStr() + ";"; 
    return ret;
}

string ForExpr :: returnOpenCLStr () { 
    string ret = "for (" + varDecl->returnOpenCLStr();
    ret += condition->returnOpenCLStr() + "; ";
    
    string op = operation->returnOpenCLStr();
    op = op.substr(0, op.size()-1); // remove the ; at the end

    ret += op + ")" + body->returnOpenCLStr(); 
    return ret;
}

string BlockExpr :: returnOpenCLStr () {
    string ret = "{";
    for (int i = 0; i < counter; i++) {
        if (expr_map.count(i) == 1) {
            ret += expr_map[i]->returnOpenCLStr();
        }
        else {
            ret += function_map[i]->returnOpenCLStr();
        }
    }
    return ret + "}";
}
string VarDeclareExpr :: returnOpenCLStr () {
    string ret = (typeArg ? convertToCPPType(*typeArg) : "auto") + " " + name;

    if (params.size() > 0) throw invalid_argument("Cannot initialize class in kernel.");
    
    if (!value) return ret + ";";
    else return ret + " = " + (*value)->returnOpenCLStr() + ";";
}


string BranchExpr :: returnOpenCLStr () {
    string ret;

    for (int i = 0; i < ifMap.size(); i++) {
        optional<unique_ptr<Expr>> cond = get<0>(move(ifMap[i]));
        unique_ptr<Expr> block = get<1>(move(ifMap[i]));

        if (!cond) ret += "else ";
        else {
            if (i > 0) ret += "else ";
            ret += "if " + (*cond)->returnOpenCLStr();
        }
        ret += block->returnOpenCLStr();
    }

    return ret;
}


string AccessorExpr :: returnOpenCLStr () {
    string ret = expr->returnOpenCLStr();
    for (int i = 0; i < v.size(); i++) {
        ret += "[" + v[i]->returnOpenCLStr() + "]";
    }
    return ret;
}

// ======================== FUNCTIONS ======================== 
string CallFuncExpr::returnOpenCLStr () {
    string ret;
    if (classVar != "") throw invalid_argument("Cannot run class in kernel");

    ret += functionName + "(";
    for (int i = 0; i < params.size(); i++) {
        ret += params[i]->returnOpenCLStr();
        if (i < params.size() - 1) ret += ",";
    }
    ret += ")";
    return ret;
}

string DeclareFunctionExpr::returnOpenCLStr () {
    if (isVarArg) throw invalid_argument("Cannot declare variadic arguments in kernel.");
    
    string ret = "__kernel ";
    ret += returnType ? convertToCPPType(*returnType) : "void";
    ret += " " + name + "(";

    int x = 0;
    for (auto i : params) {
        ret += "__global " + get<0>(i) + " " + get<1>(i);
        if (x < params.size()-1) ret += ",";
        x++; 
    }
    ret += ")";
    
    if (!body) throw invalid_argument("Must declare a body in order to define kernel.");
    
    ret += (*body)->returnOpenCLStr();

    return ret;
}