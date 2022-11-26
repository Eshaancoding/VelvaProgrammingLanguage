#include "Parser.hpp"

Parser::Parser (char* filename) {
    this->lexer = Lexer(filename);
    this->currentToken = lexer.getToken();
    this->should_stop_parsing_expr = false;
    this->keywords = {"int","float", "print", "func", "pure", "class", "if"};
}

void Parser::printCurrentToken () {
    printf("Current token: %s\n", currentToken->to_str().c_str());
}

void Parser::getNextToken () {
    currentToken = lexer.getToken();
}