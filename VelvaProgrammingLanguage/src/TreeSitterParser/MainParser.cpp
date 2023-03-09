#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseAST () {
    // start at file node
    TSNode node = cursor.currentNode();

    bool stop = false;
    auto childNode = cursor.goToChild();
    if (!childNode) return nullptr;

    while (childNode) {
        auto x = ParseGeneral();
        childNode = cursor.goToChild();
    }

    return nullptr;
}

GENERAL_TYPE Parser::ParseGeneral () {
    std::string type = cursor.getType();

    printf("====== TYPE: %s =======\n", type.c_str());

    if (type == "function_declare") return ParseFunctionDeclare();
    else if (type == "block") return ParseBlock();
    else if (type == "var_declaration") return ParseVarDecl();
    else if (type == "expression") return ParseExpression();
    else if (type == "for") return ParseForLoop();
    else if (type == "while") return ParseWhile();
    else {
        throw invalid_argument((std::string("Invalid type: ")+type).c_str());
    }
    // ts_tree_cursor_reset(cursor, currentNode);
    return unique_ptr<Expr>(nullptr);
}

vector<unique_ptr<Expr>> Parser::ParseBlock () {
    return {}; 
}