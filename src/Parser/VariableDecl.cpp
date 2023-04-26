#include "TreeSitterParser.hpp"


unique_ptr<VarDeclareExpr> Parser::ParseVarDecl () {
    // get primitive type

    cursor.goToChild();
    std::optional<std::string> primitiveType = std::nullopt;
    if (cursor.getType() == "primitive_type") {
        primitiveType = cursor.getSourceStr();
        cursor.goToSibling();
    }
        
    // get identifier
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