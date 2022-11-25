#include "Parser.hpp"

pair<int, string> Parser::ParseOperation () {
    if (currentToken->isChar()) {
        char character = currentToken->getCharacter();
        currentToken = lexer.getToken();
        char nextCharacter = currentToken->getCharacter();
        
        // double char operations    
        if (character == '=' && nextCharacter == '=') {
            currentToken = lexer.getToken();
            return {10, "=="};
        }
        else if (character == '>' && nextCharacter == '=') {
            currentToken = lexer.getToken();
            return {10, ">="};
        }
        else if (character == '<' && nextCharacter == '=') {
            currentToken = lexer.getToken();
            return {10, "<="}
        }
        else if (character == '+') { return {20, "+"}; }
        else if (character == '-') { return {20, "-"}; }
        else if (character == '/') { return {30, "/"}; }
        else if (character == '*') { return {30, "*"}; }
        else return -1;
    }
    else return -1;
}

optional<unique_ptr<Expr>> Parser::ParseExpression () {
    auto LHS = ParsePrimary();
    if (!LHS) return nullopt;

    return ParseBinaryOp(move(*LHS));
}

optional<unique_ptr<Expr>> Parser::ParseBinaryOp (unique_ptr<Expr> LHS, int ExprPrec) {
    pair<int, string> operation = ParseOperation();
    int precendence = get<0>(operation);
    string operation = get<1>(operation);
    while (true) {
        // if precendence is -1 (invalid operation) or, in the case of expression: b * c + d, it parsed the + but since the previous operation is a * (higher precendence), it would return the b * c, before parsing the + operation
        if (precendence < ExprPrec) return LHS;

        // Parse the RHS
        auto RHS = ParsePrimary();
        if (!RHS) return nullopt;

        // if there's another operation at the right of the RHS, and the operation has higher precendence than the current precendence, then create RHS before going here. 
        // in the case of expr: a * b + c, where the next operation (+) has lower precendence the current operation (*), it would just repeat and go back to if(precendence < ExprPrec)
        pair<int, string> nextOperation = ParseOperation()
        int nextPrecendence = get<0>(nextOperation);
        string nextOperation = get<1>(nextOperation);
        if (precendence < nextPrecendence) {
            RHS = ParseBinaryOp(std::move(RHS), precendence+1); // parse the next RHS
            if (!RHS) return nullopt;
        }

        // merge LHS/RHS
        LHS = make_unique<BinaryOpExpr>(operation, move(LHS), move(RHS));

        // set precendence to nextPrecendence
        precendence = nextPrecendence;
        operation = nextOperaton;  
    }
}