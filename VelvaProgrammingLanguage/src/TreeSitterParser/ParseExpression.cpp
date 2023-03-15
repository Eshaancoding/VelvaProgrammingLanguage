#include "TreeSitterParser.hpp"
#include <cstring>
#include <string>

std::string determineType (std::string firstType, std::string secondType) {
    if (firstType == "string") return "string"; 
    if (firstType == "float" && secondType == "int") return "float";
    if (firstType == "int" && secondType == "float") return "float";
    if (firstType == "boolean" && secondType == "int") return "int"; // boolean is just going to be treated as a number
    if (firstType == "boolean" && secondType == "float") return "float"; // boolean is going to be treated as a number
    if (firstType == "int" && secondType == "boolean") return "int"; // boolean is just going to be treated as a number
    if (firstType == "float" && secondType == "boolean") return "int"; // boolean is just going to be treated as a number
    throw invalid_argument((std::string("Unsupported type ") + firstType + " " + secondType + " types.").c_str());
}

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
    else if (type == "string") {
        auto result = ParseString();
        cursor.goToParent();
        return result;
    }
    else if (type == "identifier") {
        auto result = ParseIdentifier();
        cursor.goToParent(); // go back to the expr parent
        return result;
    }
    else if (type == "func_call") {
        auto result = ParseFuncCall();
        cursor.goToParent();
        return result;
    }
    else {
        throw invalid_argument("Parsing expression invalid type");
    }
}

unique_ptr<Expr> Parser::ParseNumber() {
    auto src = cursor.getSourceStr();

    // detect if it is a float or not
    istringstream is(src);
    if (strchr(src.c_str(), '.') != NULL) {
        float x;
        is >> x; 
        return make_unique<FloatExpr>(x);
    }
    else {
        int x;
        is >> x;
        return make_unique<IntExpr>(x);
    } 
}

unique_ptr<Expr> Parser::ParseString() {
    cursor.goToChild();
    auto src = cursor.getSourceStr();

    return make_unique<StringExpr>(src);
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
    
    auto typeResult = determineType(firstExpression->return_type(), secondExpression->return_type());
    return make_unique<BinaryOpExpr>(op, move(firstExpression), move(secondExpression), typeResult);
}

unique_ptr<Expr> Parser::ParseAssigment() {
    cursor.goToChild();
    
    unique_ptr<Expr> expr; 
    std::string var_name = "";
    std::string type = cursor.getType();

    if (type == "inc_dec") {
        cursor.goToChild();
        
        var_name = cursor.getSourceStr();
        
        cursor.goToSibling();

        auto baseChild = make_unique<VarUseExpr>(var_name);
        auto increment = make_unique<IntExpr>(1);

        // ================= INFERENCE TYPE NOT SUPPORTED============ because var use expr doesn't work :9
        if (cursor.getSourceStr() == "++")
            expr = make_unique<BinaryOpExpr>("+", move(baseChild), move(increment), "nan");
        else if (cursor.getSourceStr() == "--")
            expr = make_unique<BinaryOpExpr>("-", move(baseChild), move(increment), "nan");

    } else {
        var_name = cursor.getSourceStr();

        cursor.goToSibling();
        
        expr = ParseExpression();
    }
    cursor.goToParent();
    return make_unique<AssignExpr>(var_name, move(expr));
}

unique_ptr<Expr> Parser::ParseReturn () {
    optional<unique_ptr<Expr>> val = nullopt;

    cursor.goToChild();

    if (cursor.getType() == "expression") {
        val = ParseExpression();
    }

    cursor.goToParent();

    return make_unique<ReturnExpr>(move(val));
}