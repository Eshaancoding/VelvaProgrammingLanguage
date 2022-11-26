#include "Parser.hpp"

// Ex: `int i = 3;`
optional<unique_ptr<VarDeclareExpr>> Parser::ParseVariableDeclaration(bool is_floating_point) {
    // eat the int, float declaration
    currentToken = lexer.getToken();
    std::string var_name;
    
    // then get the identifier
    if (currentToken->isIdent()) {
        var_name = currentToken->getName();  
    } else {
        lexer.log_err("Expected Identifier");
        return nullopt;
    }
    currentToken = lexer.getToken(); // eat the identifier

    // then parse the =
    if (currentToken->getCharacters() != "=") {
        lexer.log_err("Expected = ");
        return nullopt;
    }
    currentToken = lexer.getToken(); // eat the =

    // parse expression
    auto value = ParseExpression();
    if (!value) return nullopt;

    return make_unique<VarDeclareExpr>(VAR_MUTABILITY_VAR, var_name, std::move(*value), nullopt); // later we would not do nullopt;
}