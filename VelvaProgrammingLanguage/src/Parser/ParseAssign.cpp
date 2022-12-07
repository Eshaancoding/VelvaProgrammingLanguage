#include "Parser.hpp"

optional<unique_ptr<AssignExpr>> Parser::ParseAssignExpr (string varName) {
    // token starts at =, get next expression    
    currentToken = move(lexer.getToken());
    auto result = ParseExpression(); 
    if (!result) return nullopt;
    return make_unique<AssignExpr>(varName, move(*result));
}