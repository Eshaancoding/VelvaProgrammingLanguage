#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseFunctionDeclare () {
    int numChildren = cursor.getNumChilds(true);
    
    bool isPure = false;
    vector<tuple<string, string>> params;
    optional<std::string> returnType;

    cursor.goToChild(true);

    if (numChildren == 5) {
        isPure = true;
        cursor.goToSibling(true); // skip pure
    }
    std::string rt = cursor.getSourceStr();
    if (rt == "func") returnType = std::nullopt;
    else returnType = rt;

    cursor.goToSibling(true);
    
    std::string functionName = cursor.getSourceStr();
    
    cursor.goToSibling(true);

    // parse parameter list
    assert(cursor.getType() == "parameter_list");
    int numParameters = cursor.getNumChilds();
    cursor.goToChild();
    for (int i = 0; i < numParameters; i++) {
        cursor.goToChild();
        std::string primitiveType = cursor.getSourceStr();
        cursor.goToSibling();
        std::string identifier = cursor.getSourceStr();

        cursor.goToParent();
        cursor.goToSibling();
        params.push_back({primitiveType, identifier});
    }
    cursor.goToParent();
    cursor.goToSibling();
    optional<unique_ptr<BlockExpr>> body = std::nullopt;
    if (cursor.getType() == "block") {
        body = ParseBlock();
    }
    cursor.goToParent();
    
    if (body.has_value()) {
        return make_unique<DeclareFunctionExpr>(false, isPure, functionName, params, returnType, move(body));
    }
    else {
        return make_unique<DeclareFunctionExpr>(true, isPure, functionName, params, returnType, std::nullopt);
    }
}

std::unique_ptr<Expr> Parser::ParseFuncCall() {
    vector<unique_ptr<Expr>> params;
    int lenArguments = cursor.getNumChilds() - 1;
    cursor.goToChild();

    std::string name = cursor.getSourceStr();

    cursor.goToSibling();

    // parse class name if exists
    std::string className = "";
    if (cursor.getType() == "identifier") {
        className = name;
        name = cursor.getSourceStr();
        lenArguments -= 1;
        cursor.goToSibling();
    }

    for (int i = 0; i < lenArguments; i++) {
        auto expr = ParseExpression();
        cursor.goToSibling();
        params.push_back(move(expr));
    }

    cursor.goToParent();
    return make_unique<CallFuncExpr>(className, name, move(params));
}