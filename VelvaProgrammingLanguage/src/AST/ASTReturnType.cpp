#include "AST.hpp" 

// yes codegn 
string Expr::return_type() { return ""; }
string IntExpr::return_type() { return "int"; }
string FloatExpr::return_type() { return "float"; }
string StringExpr::return_type() { return "string"; }
string CallFuncExpr::return_type() { return "CallFuncExpr"; } // NEED TO BE IMPLEMENTED D:
string BinaryOpExpr::return_type() { return rt; }