#include "Parser.hpp"

optional<unique_ptr<Expr>> Parser::ParsePrimary () {
    if (currentToken->isFloatIdent()) {
        auto val = make_unique<FloatExpr>(currentToken->getFloatValue());
        currentToken = lexer.getToken();
        return move(val);
    } 
    else if (currentToken->isIntIdent()) {
        auto val = make_unique<FloatExpr>(currentToken->getIntValue());
        currentToken = lexer.getToken();
        return move(val);
    }
    else if (currentToken->isChar()) {
        if (currentToken->getCharacters() == "\"") {
            auto val = ParseString();
            currentToken = lexer.getToken();
            return move(val);
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
            if (currentToken->getCharacters() == "(") {
                // call expr 
                return ParseCallExpr(name);
            }
            else {
                lexer.log_err("Invalid character for expression! Expected call function syntax.");
                return nullopt;
            } 
        }
    }
    else {
        lexer.log_err("Invalid type of expr from parse primary!");
        return nullopt;
    }
}