#include "TreeSitterParser.hpp"

unique_ptr<Expr> Parser::ParseBinaryCondition () {
    cursor.goToChild();
    // parse condition
    auto firstExpr = ParseCondition();
    cursor.goToSibling();
    auto op = cursor.getType();
    cursor.goToSibling();
    auto secondExpr = ParseCondition();
    
    cursor.goToParent();

    return make_unique<BinaryOpExpr>(op, move(firstExpr), move(secondExpr));
}

unique_ptr<Expr> Parser::ParseCondition () {

    cursor.goToChild();

    string op;
    unique_ptr<Expr> firstExpr;
    unique_ptr<Expr> secondExpr;
    if (cursor.getType() == "expression") {
        firstExpr = ParseExpression();
        cursor.goToSibling();
        op = cursor.getSourceStr();
        cursor.goToSibling();
        secondExpr = ParseExpression();
        cursor.goToParent();
        return make_unique<BinaryOpExpr>(op, move(firstExpr), move(secondExpr));
    }
    else if (cursor.getType() == "binary_condition") {
        auto result = ParseBinaryCondition(); 
        cursor.goToParent();
        return move(result);
    }
    else if (cursor.getType() == "condition") {
        auto result = ParseCondition(); 
        cursor.goToParent();
        return move(result);
    }
    else if (cursor.getType() == "identifier") {
        auto result = ParseIdentifier();
        cursor.goToParent();
        return move(result);
    }
    else if (cursor.getType() == "boolean") {
        auto result = ParseBoolean();
        cursor.goToParent();
        return move(result);
    }
    else {
        cursor.printNode();
        std::string res = "Invalid type of: " + cursor.getType();
        throw invalid_argument(res.c_str());
    }
    
}

unique_ptr<Expr> Parser::ParseIfStatement () {
    vector<tuple<optional<unique_ptr<Expr>>, unique_ptr<Expr>>> ifMap;
    int numChilds = cursor.getNumChilds();

    auto childNode = cursor.goToChild();
    assert(cursor.getType() == "condition");

    auto condition = ParseCondition();

    cursor.goToSibling();

    assert(cursor.getType() == "block");
    
    auto block = ParseBlock();

    ifMap.push_back({move(condition), move(block)});

    if (numChilds == 3) { // there is an else if or else statement
        cursor.goToSibling();
        if (cursor.getType() == "else_if") {
            cursor.goToChild();
            auto otherBranchExpr = static_cast<BranchExpr*>(ParseIfStatement().release());
            
            // isnert to if map
            for (int i = 0; i < otherBranchExpr->ifMap.size(); i++) {
                ifMap.push_back(move(otherBranchExpr->ifMap[i]));
            }
        }
        else if (cursor.getType() == "else") {
            cursor.goToChild();
            auto elseBlock = ParseBlock();
            ifMap.push_back({std::nullopt, move(elseBlock)});
        }
        cursor.goToParent();
    }
    
    cursor.goToParent();
    return make_unique<BranchExpr>(move(ifMap));
}