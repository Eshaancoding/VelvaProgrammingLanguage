#include "Parser.hpp" 

optional<unique_ptr<CallFuncExpr>> Parser::ParseCallExpr (string funcName) {
    vector<unique_ptr<Expr>> params;
    currentToken = move(lexer.getToken()); // eat ( start parsing env 
    while (true) {
        // usually we would parse an expression, but for now we are just parsing a bunch of floats
        auto expression = ParseExpression();
        
        if (!expression) return nullopt;
        params.push_back(move(*expression));

        if (currentToken->getCharacters() == ")") break;
        else if (currentToken->getCharacters() != ",") {
            lexer.log_err("Expected character ) or ,");
            return nullopt;
        }
        currentToken = move(lexer.getToken());  // get next in sequence
    }

    currentToken = move(lexer.getToken());
    return make_unique<CallFuncExpr>(funcName, std::move(params));
}