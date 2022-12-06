#include "Parser.hpp"

// Helper function, this is where it's going to get type inference and finally return the binary op expr
unique_ptr<BinaryOpExpr> makeBinaryOp (string op_str, pair<unique_ptr<Expr>, string>> LHS, pair<unique_ptr<Expr>, string> RHS) {
    // Type ane expr
    unique_ptr<Expr> LHS_expr(move(get<0>(LHS)));
    string LHS_type = get<1>(LHS)
    unique_ptr<Expr> RHS_expr(move(get<1>(RHS)));    
    string RHS_type = get<1>(RHS);
    
    // find result type
    string result_type = "";
    map<string, int> typePrecendence ({
        {"int", 0},
        {"double", 1},
        {"char", 2},
        {"string", 3},
    });
    if (typePrecendence[RHS_type] > typePrecedence[LHS_type]) {
        result_type = RHS_type;
    }
    else {
        result_type = RHS_type;
    }
    return make_unique<BinaryOpExpr>(op_str, move(LHS_expr), move(RHS_type), result_type);
}

pair<int, string> Parser::ParseOperation () {
    if (currentToken->isChar()) {
        string characters = currentToken->getCharacters();
        
        // double char operations    
        if (characters == "==") { return {10, characters}; }
        else if (characters == ">=") { return {10, characters}; }
        else if (characters == "<=") { return {10, characters}; }
        else if (characters == ">") { return {10, characters}; }
        else if (characters == "<") { return {10, characters}; }
        else if (characters == "+") { return {20, characters}; }
        else if (characters == "-") { return {20, characters}; }
        else if (characters == "/") { return {30, characters}; }
        else if (characters == "*") { return {30, characters}; }
        else return {-1, ""};
    }
    else return {-1, ""};
}

optional<unique_ptr<Expr>> Parser::ParseExpression () {
    should_stop_parsing_expr = false;
    auto LHS = ParsePrimary();
    if (!LHS) return nullopt;

    return ParseBinaryOp(move(*LHS));
}

optional<unique_ptr<Expr>> Parser::ParseBinaryOp (pair<unique_ptr<Expr>, string> LHS, optional<pair<int, string>> operationParse) {
    // get Operation
    int precedence;
    string op_str;
    if (!operationParse) {
        auto operation = ParseOperation();
        precedence = get<0>(operation);
        op_str = get<1>(operation);

        // if next operation resulted in an error, just return LHS
        if (precedence == -1)
            return std::move(LHS);
         
        currentToken = lexer.getToken(); 
    } else {
        precedence = get<0>(*operationParse);
        op_str = get<1>(*operationParse);
    }

    while (true) {
        // get RHS 
        auto RHS = ParsePrimary();
        if (!RHS) return nullopt;

        // get next operation
        auto nextOperation = ParseOperation();
        int nextPrecedence = get<0>(nextOperation);
        string next_op_str = get<1>(nextOperation);

        // if next operation resulted in an error, just return the combined RHS and LHS
        if (nextPrecedence == -1) {
            should_stop_parsing_expr = true;
            return makeBinaryOp(op_str, LHS, *RHS);
        }

        currentToken = lexer.getToken(); 

        // compare precendence of next operation and before operation
        if (nextPrecedence > precedence) {
            RHS = ParseBinaryOp(move(*RHS), nextOperation);
            if (!RHS) return nullopt;
        } 

        LHS = make_unique<BinaryOpExpr>(op_str, move(LHS), move(*RHS));
        LHS = makeBinaryOp(op_str, move(LHS), move(*RHS)); 

        if (should_stop_parsing_expr) return LHS;
         
        // set
        precedence = nextPrecedence;
        op_str = next_op_str;
    }

}