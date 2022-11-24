#include "Parser.hpp" 

optional<unique_ptr<CallFuncExpr>> Parser::ParseCallExpr (string funcName) {
    vector<unique_ptr<Expr>> params;
    currentToken = lexer.getToken(); // eat ( start parsing env 
    while (true) {
        // usually we would parse an expression, but for now we are just parsing a bunch of floats
        
        if (currentToken->isFloatIdent()) {
            params.push_back(make_unique<FloatExpr>(currentToken->getFloatValue()));
        } 
        else if (currentToken->isIntIdent()) {
            params.push_back(make_unique<IntExpr>(currentToken->getIntValue()));
        }
        else {
            lexer.log_err("Expected a float or int as argument");
            return nullopt;
        }

        currentToken = lexer.getToken();  // get char
        if (currentToken->getCharacter() == ')') break;
        else if (currentToken->getCharacter() != ',') {
            lexer.log_err("Expected character ) or ,");
            return nullopt;
        }
        currentToken = lexer.getToken();  // get next in sequence
    }

    return make_unique<CallFuncExpr>(funcName, std::move(params));
}