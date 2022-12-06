#include "Parser.hpp"

optional<pair<unique_ptr<Expr>, string>> Parser::ParsePrimary () {
    if (currentToken->isIntIdent()) {
        auto val = make_unique<IntExpr>(currentToken->getIntValue());
        currentToken = lexer.getToken();
        return make_pair(move(val), string("int"));
    }
    else if (currentToken->isFloatIdent()) {
        auto val = make_unique<FloatExpr>(currentToken->getFloatValue());
        currentToken = lexer.getToken();
        return make_pair(move(val), string("float"));
    } 
    else if (currentToken->isChar()) {
        if (currentToken->getCharacters() == "\"") {
            auto val = ParseString();
            currentToken = lexer.getToken();
            return make_pair(move(val), string("char"));
        }
        else {
            lexer.log_err("Invalid character from parse primary!");
            return nullopt;
        }
    }
    else if (currentToken->isIdent()) {
        if (std::find(keywords.begin(), keywords.end(), currentToken->getName()) != keywords.end()) {
            // the current token is one of the keywords
            lexer.log_err("Cannot use one of the keywords as part of the expression!");
            return nullopt;
        } else {
            string name = currentToken->getName();
            currentToken = lexer.getToken();
            if (currentToken->getCharacters() == "(") return {ParseCallExpr(name), "callFunc"};
            else return make_pair(make_unique<VarUseExpr>(name), string("Variable"));
        }
    }
    else {
        lexer.log_err("Invalid type of expr from parse primary!");
        return nullopt;
    }
}