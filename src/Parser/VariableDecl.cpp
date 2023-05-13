#include "TreeSitterParser.hpp"


unique_ptr<VarDeclareExpr> Parser::ParseVarDecl () {
    int numChilds = cursor.getNumChilds();
    std::optional<std::string> primitiveType = std::nullopt;
    optional<unique_ptr<Expr>> expr = std::nullopt;
    string identifier;

    
    if (cursor.getNumChilds() == 1) {
        throw invalid_argument("cannot declare auto variable with empty value");
    }

    // get primitive type
    cursor.goToChild();
        
    if (cursor.getType() == "primitive_type") {
        primitiveType = cursor.getSourceStr();
        cursor.goToSibling();
            
        // get identifier
        assert(cursor.getType() == "identifier");
        identifier = cursor.getSourceStr();
        
        if (numChilds > 2) {
            // get expression
            cursor.goToSibling();
            assert(cursor.getType() == "expression");
            expr = ParseExpression();
        }
    }
    else {
        assert(cursor.getType() == "identifier");
        identifier = cursor.getSourceStr();
        cursor.goToSibling();

        assert(cursor.getType() == "expression");
        expr = ParseExpression();
    }
    
    // go back to the var decl expr 
    cursor.goToParent();
    
    return make_unique<VarDeclareExpr>(VarMutability::VAR_MUTABILITY_VAR, identifier, move(expr), primitiveType);
}