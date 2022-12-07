#include "Parser.hpp"

optional<vector<unique_ptr<Expr>>> Parser::ParseBlock (char end_char) {
    vector<unique_ptr<Expr>> list = {};
    while (true) {
        if (currentToken->getCharacters() == to_string(end_char))
            break;
        optional<unique_ptr<Expr>> statement = parseStatement();
        if (!statement) return nullopt;
        list.push_back(move(*statement));
    }
    return list;
}

optional<unique_ptr<BranchExpr>> Parser::ParseBranch () {
    map<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>> ifMap;

    while (true) {
        vector<unique_ptr<Expr>> body = {};     
        optional<unique_ptr<Expr>> conditional = nullopt;

        // check conditional
        if (currentToken->getName() == "if") {
            currentToken = lexer.getToken(); 
            conditional = ParseExpression();
            currentToken = lexer.getToken(); 
            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = lexer.getToken(); 
        } 
        else if (currentToken->getName() == "else") {
            currentToken = lexer.getToken();
            if (currentToken->getName() == "if") {
                conditional = ParseExpression();
            } else currentToken = lexer.getToken();
            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = lexer.getToken(); 
        }
        else break;

        printf("extra: %s\n", (*conditional)->debug_info().c_str());
        break;
    }

    return make_unique<BranchExpr>(move(ifMap));
}