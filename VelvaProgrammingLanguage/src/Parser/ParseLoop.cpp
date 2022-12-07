#include "Parser.hpp"

optional<unique_ptr<WhileExpr>> Parser::ParseWhile() {
    unique_ptr<Expr> conditional;
    vector<unique_ptr<Expr>> body;

    currentToken = lexer.getToken();
    if(currentToken->getCharacters()!="(") {
        lexer.log_err("No ( after while keyword");
        return nullopt;
    }
    conditional = ParseExpression();

    currentToken = lexer.getToken();
    if(currentToken->getCharacters()!=")") {
        lexer.log_err("No ) after while conditional");
        return nullopt;
    }

    currentToken = lexer.getToken();
    if(currentToken->getCharacters()!="{") {
        lexer.log_err("Expected { after while");
        return nullopt;
    }
    body = ParseBlock("}");

    return make_unique<WhileExpr>(move(conditional), move(body));
}

optional<unique_ptr<ForExpr>> Parse::ParseFor() {
    unique_ptr<Expr> start, end, step;
    vector<unique_ptr<Expr>> body;

    currentToken = lexer.getToken();
    if(currentToken->getCharacter()!="(") {
        lexer.log_err("No ( after for");
        return nullopt;
    }
    start = ParseStatement();
    currentToken = lexer.getToken();
    if(currentToken->getCharacter()!=";") {
        lexer.log_err("Need semicolon after start");
        return nullopt;
    }
    end = ParseExpression();
    currentToken = lexer.getToken();
    if(currentToken->getCharacter()!=";") {
        lexer.log_err("Need semicolon after end");
        return nullopt;
    }
    step = ParseStatement();
    currentToken = lexer.getToken();
    if(currentToken->getCharacter()!=")") {
        lexer.log_err("Expected )");
        return nullopt;
    }
    currentToken = lexer.getToken();
    if(currentToken->getCharacter()!="{") {
        lexer.log_err("Expected {");
        return nullopt
    }
    body = ParseBlock();

    return make_unique<ForExpr>(move(start), move(end), move(step), move(body));
}