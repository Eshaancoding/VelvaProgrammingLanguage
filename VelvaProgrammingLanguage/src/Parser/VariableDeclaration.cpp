#include "Parser.hpp"

// Ex: `int i = 3;`
variant<unique_ptr<VarDeclareExpr>, unique_ptr<ErrorExpr>> Parser::ParseVariableDeclaration(bool is_floating_point) {
    // eat the int, float declaration
    currentToken = lexer.getToken();
    std::string var_name;
    
    // then get the identifier
    if (currentToken->isIdent()) {
        var_name = currentToken->getName();  
    } else {
        lexer.log_err("Expected Identifier");
        return make_unique<ErrorExpr>();
    }
    currentToken = lexer.getToken(); // eat the identifier

    // then parse the =
    if (!currentToken->isChar() || !(currentToken->getCharacter() != '=')) {
        lexer.log_err("Expected = ");
        return make_unique<ErrorExpr>();
    }
    currentToken = lexer.getToken(); // eat the =

    // Eat the number
    // cannot declare int i = 3.0;
    if (!is_floating_point && currentToken->isFloatIdent()) {
        lexer.log_err("Expected = ");
        return make_unique<ErrorExpr>();
    }

    unique_ptr<Expr> value; 
    std::string type;
    if (currentToken->isFloatIdent()) {
        value = make_unique<FloatExpr>(currentToken->getFloatValue());
        type = "float";
    } 
    else if (currentToken->isIntIdent()) {
        value = make_unique<IntExpr>(currentToken->getIntValue());
        type = "int";
    } // yeah yeah we'll add more later
    else {
        lexer.log_err("Expected a number");
        return make_unique<ErrorExpr>();
    }

    return make_unique<VarDeclareExpr>(VAR_MUTABILITY_VAR, var_name, std::move(value), type);
}