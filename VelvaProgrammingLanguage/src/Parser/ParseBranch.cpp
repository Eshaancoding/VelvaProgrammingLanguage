#include "Parser.hpp"

optional<vector<unique_ptr<Expr>>> Parser::ParseBlock (string end_char) {
    vector<unique_ptr<Expr>> list = {};
    while (true) {
        if (currentToken->getCharacters() == end_char) {
            break;
        }
        optional<unique_ptr<Expr>> statement = parseStatement();
        if (!statement) return nullopt;
        list.push_back(move(*statement));
    }
    return list;
}

optional<unique_ptr<BranchExpr>> Parser::ParseBranch () {
    vector<tuple<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>>> ifMap;

    while (true) {
        optional<unique_ptr<Expr>> conditional = nullopt;

        // check conditional
        if (currentToken->getName() == "if") {
            currentToken = move(lexer.getToken()); 
            conditional = ParseExpression();
            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = move(lexer.getToken()); 
        } 
        else if (currentToken->getName() == "else") {
            currentToken = move(lexer.getToken());
            if (currentToken->getName() == "if") {
                currentToken = move(lexer.getToken());
                conditional = ParseExpression();
            } 
            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = move(lexer.getToken()); 
        }
        else break;

        // check parse block
        auto parseBlock = ParseBlock("}");
        if (!parseBlock) return nullopt;
        vector<unique_ptr<Expr>> body = move(*parseBlock);

        // run
        ifMap.push_back(make_tuple<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>>(move(conditional), move(body)));
    }

    return make_unique<BranchExpr>(move(ifMap));
}