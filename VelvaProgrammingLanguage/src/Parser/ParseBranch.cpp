#include "Parser.hpp"
#include <typeinfo>

optional<vector<unique_ptr<Expr>>> Parser::ParseBlock (char end_char) {
    vector<unique_ptr<Expr>> list = {};
    while (true) {
        if (currentToken->getCharacters() == to_string(end_char)) {
            currentToken = move(lexer.getToken());
            break;
        }
        optional<unique_ptr<Expr>> statement = parseStatement();
        if (!statement) return nullopt;
        list.push_back(move(*statement));
    }
    return list;
}

optional<unique_ptr<BranchExpr>> Parser::ParseBranch () {
    map<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>> ifMap;

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
                conditional = ParseExpression();
            } else currentToken = move(lexer.getToken());
            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = move(lexer.getToken()); 
        }
        else break;

        // check parse block
        vector<unique_ptr<Expr>> body = *(ParseBlock('}'));

        printf("extra: %s\n", (*conditional)->debug_info().c_str());

        // run
        ifMap[move(conditional)] = move(body);
        break;
    }

    return make_unique<BranchExpr>(move(ifMap));
}