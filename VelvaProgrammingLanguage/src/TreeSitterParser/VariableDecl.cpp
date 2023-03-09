#include "TreeSitterParser.hpp"


unique_ptr<Expr> Parser::ParseVarDecl () {
   
    // get primitive type
    cursor.goToChild();
    assert(cursor.getType() == "primitive_type");
    std::string primitiveType = cursor.getSourceStr();
    
    // get identifier
    cursor.goToSibling();
    assert(cursor.getType() == "identifier");
    std::string identifier = cursor.getSourceStr();
    
    // get expression
    cursor.goToSibling();
    assert(cursor.getType() == "expression");
    auto expr = ParseExpression();
    
    // go back to the var decl expr 
    cursor.goToParent();
    
    return make_unique<VarDeclareExpr>(VarMutability::VAR_MUTABILITY_VAR, identifier, move(expr), primitiveType);
}