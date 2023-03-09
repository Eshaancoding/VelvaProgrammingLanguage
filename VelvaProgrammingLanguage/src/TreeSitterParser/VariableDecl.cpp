#include "TreeSitterParser.hpp"


unique_ptr<Expr> Parser::ParseVarDecl () {
    printf("type in parse var decl:%s\n", cursor.getType().c_str());   
    
    return nullptr;
}