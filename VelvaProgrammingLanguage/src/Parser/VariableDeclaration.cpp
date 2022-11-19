#include "Parser.hpp"

// Ex: `int i = 3;`
void Parser::ParseVariableDeclaration(bool is_floating_point) {
    // eat the int, float declaration
    token = lexer.getToken();
    
    // then get the identifier
    if (token.isIdent()) {
        
    } else {
        return nullptr
    }
}