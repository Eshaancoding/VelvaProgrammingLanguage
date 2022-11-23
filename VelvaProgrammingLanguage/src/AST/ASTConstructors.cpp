#include "AST.hpp" 

optional<Value*> Expr::codegen(CompilationContext &ctx) { return nullopt; }
optional<Value*> ErrorExpr::codegen(CompilationContext &ctx) { return nullopt; }