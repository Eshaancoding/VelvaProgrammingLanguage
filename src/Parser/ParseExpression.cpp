#include "TreeSitterParser.hpp"
#include <cstring>
#include <string>



unique_ptr<VarUseExpr> Parser::ParseIdentifier () {
    std::string name = cursor.getSourceStr();
    
    return make_unique<VarUseExpr>(name);
}

unique_ptr<Expr> Parser::ParseExpression () {
    auto node = cursor.goToChild();
    auto type = cursor.getType();

    unique_ptr<Expr> result;
    if (type == "parathensisExpr") result = ParseParanthesis();
    else if (type == "binary_expression") result = ParseBinaryOp();
    else if (type == "number") result = ParseNumber();
    else if (type == "string") result = ParseString();
    else if (type == "identifier") result = ParseIdentifier();
    else if (type == "ternaryStatement") result = ParseTernary();
    else if (type == "func_call") result = ParseFuncCall();
    else if (type == "bool") result = ParseBool();
    else if (type == "pointer") result = ParsePointer();
    else if (type == "accessor") result = ParseAccessor();
    else if (type == "char") result = ParseChar();
    else {
        throw invalid_argument((std::string("Parsing expression invalid type: ") + type).c_str());
    }
    cursor.goToParent();
    return result;
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
    auto src = cursor.getSourceStr(); 
    src.erase(src.begin()); // remove the supporting ""
    src.pop_back();
    return make_unique<StringExpr>(src);
}

unique_ptr<Expr> Parser::ParseBinaryOp() {
    auto src = cursor.currentNode();

    // get first expression 
    cursor.goToChild();

    if (cursor.getType() == "parathensisExpr") {
        auto result = ParseParanthesis();
        cursor.goToParent();
        return move(result);
    }
    
    auto firstExpression = ParseExpression();  

    // get op type
    cursor.goToSibling(true);
    std::string op = cursor.getType();

    // go to second expression
    cursor.goToSibling();
    auto secondExpression = ParseExpression();
    
    cursor.goToParent(); // redirect back to the binary expression
    
    return make_unique<BinaryOpExpr>(op, move(firstExpression), move(secondExpression));
}

unique_ptr<Expr> Parser::ParseAssigment() {
    int numChilds = cursor.getNumChilds();

    cursor.goToChild();

    vector<unique_ptr<Expr>> p = {};
    unique_ptr<Expr> expr = nullptr; 
    std::string var_name = "";
    std::string type = cursor.getType();

    // new 
    var_name = cursor.getSourceStr();

    // test if there [
    cursor.goToSibling(true);

    if (cursor.getSourceStr() == "[") {
        while (true) {
            cursor.goToSibling(true);
            auto srcSource = cursor.getSourceStr();

            if (srcSource == "]") break;
            if (srcSource == ",") continue;

            p.push_back(ParseExpression());
        }

        cursor.goToSibling(true);
    }

    if (cursor.getSourceStr() == "=") {
        cursor.goToSibling();
        expr = ParseExpression();
    } 
    else {
        auto baseChild = make_unique<VarUseExpr>(var_name);
        auto increment = make_unique<IntExpr>(1);

        if (cursor.getSourceStr() == "++")
            expr = make_unique<BinaryOpExpr>("+", move(baseChild), move(increment));
        else if (cursor.getSourceStr() == "--")
            expr = make_unique<BinaryOpExpr>("-", move(baseChild), move(increment));
    }
    
    cursor.goToSibling();

    if (var_name == "") throw invalid_argument("Var name cannot be empty!");

    cursor.goToParent();
    return make_unique<AssignExpr>(var_name, move(expr), move(p));
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

unique_ptr<Expr> Parser::ParseBool () {
    unique_ptr<Expr> ret;
    cursor.goToChild();
    if (cursor.getType() == "true") ret = make_unique<IntExpr>(1, 1);
    else if (cursor.getType() == "false") ret = make_unique<IntExpr>(0, 1);
    else throw invalid_argument("this should never happen");
    cursor.goToParent();
    return move(ret);
}

unique_ptr<PointerExpr> Parser::ParsePointer () {
    cursor.goToChild();
    auto expr = ParseIdentifier();
    cursor.goToParent();

    return make_unique<PointerExpr>(expr->var);
}

unique_ptr<AccessorExpr> Parser::ParseAccessor () {
    int numChilds = cursor.getNumChilds();
    cursor.goToChild();

    auto ex = ParseIdentifier();
    vector<unique_ptr<Expr>> arr;

    cursor.goToSibling();
    for (int i = 0; i < numChilds-1; i++) {
        arr.push_back(ParseExpression());
        cursor.goToSibling();
    }

    cursor.goToParent();
    
    return make_unique<AccessorExpr>(move(ex), move(arr));
}

unique_ptr<CharExpr> Parser::ParseChar () {
    string x = cursor.getSourceStr();
    return make_unique<CharExpr>(x[1]); // skip the ' at the beginning
}