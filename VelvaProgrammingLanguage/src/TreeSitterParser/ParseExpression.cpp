#include "TreeSitterParser.hpp"
#include <cstring>
#include <string>

unique_ptr<Expr> Parser::ParseIdentifier () {
    std::string name = cursor.getSourceStr();
    
    return make_unique<VarUseExpr>(name);
}

unique_ptr<Expr> Parser::ParseExpression () {
    auto node = cursor.goToChild();
    auto type = cursor.getType();


    if (type == "binary_expression") {
        auto result = ParseBinaryOp();
        cursor.goToParent(); // go back to the expr parent
        return result;
    }
    else if (type == "number") {
        auto result = ParseNumber();
        cursor.goToParent(); // go back to the expr parent
        return result;
    }
    else if (type == "identifier") {
        auto result = ParseIdentifier();
        cursor.goToParent(); // go back to the expr parent
        return result;
    }
    else {
        throw invalid_argument("Parsing expression invalid type");
    }
}

unique_ptr<Expr> Parser::ParseNumber() {
    auto src = cursor.getSourceStr();
    // return back to expression
    return make_unique<IntExpr>(stoi(src));
}

unique_ptr<Expr> Parser::ParseBinaryOp() {
    auto src = cursor.currentNode();


    // get first expression 
    cursor.goToChild();
    auto firstExpression = ParseExpression();  

    // get op type
    cursor.goToSibling(true);
    std::string op = cursor.getType();

    // go to second expression
    cursor.goToSibling();
    auto secondExpression = ParseExpression();
    
    cursor.goToParent(); // redirect back to the binary expression
    
    return make_unique<BinaryOpExpr>(op, move(firstExpression), move(secondExpression), "nan");
}