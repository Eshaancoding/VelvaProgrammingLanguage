#include "Parser.hpp"

optional<unique_ptr<WhileExpr>> Parser::ParseWhile() {
    currentToken = move(lexer.getToken());
    if(currentToken->getCharacters()!="(") {
        lexer.log_err("No ( after while keyword");
        return nullopt;
    }
    currentToken = move(lexer.getToken());
    auto conditional = ParseExpression();
    if (!conditional) { return nullopt; }

    /*
    currentToken = move(lexer.getToken());
    if(currentToken->getCharacters()!=")") {
        lexer.log_err("No ) after while conditional");
        return nullopt;
    }
    */
    currentToken = move(lexer.getToken());
    if(currentToken->getCharacters()!="{") {
        lexer.log_err("Expected { after while");
        return nullopt;
    }
    currentToken = move(lexer.getToken());
    auto body = ParseBlock(); 
    if (!body) { return nullopt; }

    return make_unique<WhileExpr>(move(*conditional), move(*body));
}

// optional<unique_ptr<ForExpr>> Parse::ParseFor() {
//     unique_ptr<Expr> start, end, step;
//     vector<unique_ptr<Expr>> body;

//     currentToken = move(lexer.getToken());
//     if(currentToken->getCharacter()!="(") {
//         lexer.log_err("No ( after for");
//         return nullopt;
//     }
//     start = ParseStatement();
//     currentToken = move(lexer.getToken());
//     if(currentToken->getCharacter()!=";") {
//         lexer.log_err("Need semicolon after start");
//         return nullopt;
//     }
//     end = ParseExpression();
//     currentToken = move(lexer.getToken());
//     if(currentToken->getCharacter()!=";") {
//         lexer.log_err("Need semicolon after end");
//         return nullopt;
//     }
//     step = ParseStatement();
//     currentToken = move(lexer.getToken());
//     if(currentToken->getCharacter()!=")") {
//         lexer.log_err("Expected )");
//         return nullopt;
//     }
//     currentToken = move(lexer.getToken());
//     if(currentToken->getCharacter()!="{") {
//         lexer.log_err("Expected {");
//         return nullopt
//     }
//     body = ParseBlock();

//     return make_unique<ForExpr>(move(start), move(end), move(step), move(body));
// }