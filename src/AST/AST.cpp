#include "AST.hpp"
#include "CompilationContext.hpp"

// Declare Variable expression
VarDeclareExpr::VarDeclareExpr(VarMutability mutTypeArg, string nameArg, unique_ptr<Expr> valueArg, optional<string> typeArg) {
    value = move(valueArg); 
    mutType = mutTypeArg;
    name = nameArg;

    auto typeExpr = value->return_type();
    if (typeArg && *typeArg != typeExpr) {
        throw invalid_argument("bruh not same type");
    }
    type = typeExpr;
};

// Block expr decl
void BlockExpr::add (unique_ptr<Expr> expr) {
    expr_map[counter] = move(expr);
    counter += 1; 
}

void BlockExpr::add (vector<unique_ptr<Expr>> expr) {
    for (int i = 0; i < expr.size(); i++) {
        counter += 1; 
        expr_map[counter] = move(expr[i]);
    }
}

void BlockExpr::add (unique_ptr<DeclareFunctionExpr> func) {
    function_map[counter] = move(func);
    counter += 1;
}

// Name registry
string NameRegistry::use(const string &prefix) {
    names[prefix] = names.count(prefix) ? ++names[prefix] : 0;
    return prefix + "_" + to_string(names[prefix]);
}


// expr
optional<Value*> Expr::codegen(CompilationContext &ctx) {return std::nullopt;}

// ternary
TernaryExpr :: TernaryExpr(unique_ptr<Expr> ifP, unique_ptr<Expr> thenP, unique_ptr<Expr> elseP) {
    _if = move(ifP);
    then = move(thenP);
    _else = move(elseP);

    if (then->return_type() == _else->return_type()) {
        retType = then->return_type();
    }
    else {
        string returnArg = "Invalid return type when parsing ternary statements; first expr: ";
        returnArg += then->return_type();
        returnArg += " second expr: ";
        returnArg += _else->return_type();
        throw invalid_argument(returnArg);
    }
}