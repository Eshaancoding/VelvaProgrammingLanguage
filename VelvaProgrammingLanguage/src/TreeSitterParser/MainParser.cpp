#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseAST () {
    // start at file node
    TSNode node = cursor.currentNode();

    bool stop = false;
    auto childNode = cursor.goToChild();
    if (!childNode) return nullptr;

    while (childNode) {
        // ParseGeneral();
        childNode = cursor.goToChild();
    }

    return nullptr;
}

template<typename T>
T Parser::ParseGeneral () {
    std::string type = cursor.getType();

    if (type == "function_declare") return ParseFunctionDeclare();
    if (type == "block") return ParseBlock();


    // ts_tree_cursor_reset(cursor, currentNode);
    return unique_ptr<Expr>(nullptr);
}