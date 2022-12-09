#include "AST.hpp" 


// yes codegn 
string Expr::return_type() { return ""; }
string IntExpr::return_type() { return "int"; }
string FloatExpr::return_type() { return "float"; }
string StringExpr::return_type() { return "string"; }
string CallFuncExpr::return_type() { return "CallFuncExpr"; } // NEED TO BE IMPLEMENTED D:
string BinaryOpExpr::return_type() { return "int";  }
string ErrorExpr::return_type() { return "error";}
string VarUseExpr::return_type() { return "VarUseExpr"; } // NEEDT O BE IMPLEMENTED
string VarDeclareExpr::return_type() { return "VarDeclareExpr"; } // NEED TO BE IMPLEMENTED
string AssignExpr::return_type() { return "AssignExpr"; } 
string BranchExpr::return_type() { return "BranchExpr"; }  
string TernaryExpr::return_type() { return "TenaryExpr"; } 
string WhileExpr::return_type() { return "WhileExpr"; } 