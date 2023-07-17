#include "TreeSitterParser.hpp"


unique_ptr<VarDeclareExpr> Parser::ParseVarDecl () {
    int numChilds = cursor.getNumChilds();
    std::optional<std::string> primitiveType = std::nullopt;
    optional<unique_ptr<Expr>> expr = std::nullopt;
    string identifier;

    
    if (cursor.getNumChilds() == 1) {
        throw invalid_argument("cannot declare auto variable with empty value");
    }

    vector<unique_ptr<Expr>> exprs;

    // get primitive type
    cursor.goToChild();
        
    if (cursor.getType() == "primitive_type") {
        primitiveType = cursor.getSourceStr();
        cursor.goToSibling();
            
        // get identifier
        assert(cursor.getType() == "identifier");
        identifier = cursor.getSourceStr();

        if (numChilds > 2) {
            // get next char 
            cursor.goToSibling(true);

            if (cursor.getSourceStr() == "=") { // normal var decl
                cursor.goToSibling(true);
                assert(cursor.getType() == "expression");
                expr = ParseExpression();

            } else {                            // ohh is  a class decl
                cursor.goToSibling(true);
                while (true) {
                    auto ex = ParseExpression();
                    cursor.goToSibling(true);
                    
                    exprs.push_back(move(ex));
                    
                    if (cursor.getSourceStr() == ",") cursor.goToSibling(true);
                    else break;
                }
            }

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
    
    return make_unique<VarDeclareExpr>(VarMutability::VAR_MUTABILITY_VAR, identifier, move(expr), primitiveType, move(exprs));
}