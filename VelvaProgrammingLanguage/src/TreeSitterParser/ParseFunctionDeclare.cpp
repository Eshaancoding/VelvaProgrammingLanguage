#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseFunctionDeclare () {
    printf("Gone to function declare\n");
    auto node = cursor.goToChild();
    if (!node)
        return nullptr;

    if (cursor.getType() != "primitive_type") {
        printf("Expected primitive type\n");
        return nullptr;    
    }

}