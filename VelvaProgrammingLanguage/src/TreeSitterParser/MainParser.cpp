#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseAST () {
    
    unique_ptr<Expr> block = ParseBlock();

    cursor.goToParent();
    cursor.printNode();

    return make_unique<DeclareFunctionExpr>(
        false,
        false,
        "_main",
        (vector<tuple<string, string>>){},
        std::nullopt, 
        move(block)
    );
}

GENERAL_TYPE Parser::ParseGeneral () {
    std::string type = cursor.getType();

    if (type == "function_declare") return ParseFunctionDeclare();
    else if (type == "if_statement") return ParseIfStatement();
    else if (type == "block") return ParseBlock();
    else if (type == "var_declaration") return ParseVarDecl();
    else if (type == "assignment") return ParseAssigment();
    else if (type == "expression") return ParseExpression();
    else if (type == "for") return ParseForLoop();
    else if (type == "while") return ParseWhile();
    else {
        throw invalid_argument((std::string("Invalid type when parsing general: ")+type).c_str());
    }
    // ts_tree_cursor_reset(cursor, currentNode);
    return unique_ptr<Expr>(nullptr);
}

