#include "Parser.hpp"

optional<unique_ptr<AssignExpr>> Parser::ParseAssignExpr (string varName) {
    // token starts at =, get next expression    
    currentToken = lexer.getToken(); 

    // Eat the number
    // cannot declare int i = 3.0; I wish we could declare this, but I don't know how to get is_floating_point, e.i get info on the variable name that it's parsing
    // if (!is_floating_point && currentToken->isFloatIdent()) {
    //     lexer.log_err("Can't declare a float with an int declaration.");
    //     return nullopt;
    // }

    unique_ptr<Expr> value; 
    if (currentToken->isFloatIdent()) {
        value = make_unique<FloatExpr>(currentToken->getFloatValue());
    } 
    else if (currentToken->isIntIdent()) {
        value = make_unique<IntExpr>(currentToken->getIntValue());
    }
    else {
        lexer.log_err("Expected a number");
        return nullopt;
    }

    return make_unique<AssignExpr>(varName, std::move(value));

}