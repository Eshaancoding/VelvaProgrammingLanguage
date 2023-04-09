#include "AST.hpp" 



string Expr::return_type() { return ""; }
string IntExpr::return_type() { return "int"; }
string FloatExpr::return_type() { return "float"; }
string StringExpr::return_type() { return "string"; }
string ErrorExpr::return_type() { return "error";}
string VarDeclareExpr::return_type() { return "error"; } // NEED TO BE IMPLEMENTED
string AssignExpr::return_type() { return "AssignExpr"; } 
string BranchExpr::return_type() { return "BranchExpr"; }  
string WhileExpr::return_type() { return "WhileExpr"; } 
string BlockExpr::return_type() { return "block"; }
string ForExpr::return_type() { return "for"; }
string ReturnExpr::return_type() { return "return"; }

string TernaryExpr::return_type() { return retType; } 
string BinaryOpExpr::return_type() { return retType; }
string CallFuncExpr::return_type() { return retType; } // NEED TO BE IMPLEMENTED D:
string VarUseExpr::return_type() { return retType; } // NEEDT O BE IMPLEMENTED