#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseAST () {
    
    unique_ptr<Expr> block = ParseBlock();

    cursor.goToParent();

    return make_unique<DeclareFunctionExpr>(
        false,
        false,
        "_start",
        (vector<tuple<string, string>>){},
        std::nullopt, 
        move(block)
    );
}

GENERAL_TYPE Parser::ParseGeneral () {
    std::string type = cursor.getType();
    
    if (type == "function_declare") return ParseFunctionDeclare();
    else if (type == "return_statement") return ParseReturn();
    else if (type == "while") return ParseWhile();
    else if (type == "for") return  ParseForLoop();
    else if (type == "func_call") return ParseFuncCall();
    else if (type == "if_statement") return ParseIfStatement();
    else if (type == "block") return ParseBlock();
    else if (type == "var_declaration") return ParseVarDecl();
    else if (type == "assignment") return ParseAssigment();
    else if (type == "expression") return ParseExpression();
    else if (type == "for") return ParseForLoop();
    else if (type == "while") return ParseWhile();
    // else if (type == "return") return ParseReturn();
    else {
        throw invalid_argument((std::string("Invalid type when parsing general: ")+type).c_str());
    }
    // ts_tree_cursor_reset(cursor, currentNode);
    return unique_ptr<Expr>(nullptr);
}