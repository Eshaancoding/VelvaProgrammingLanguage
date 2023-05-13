#include "TreeSitterParser.hpp"

std::unique_ptr<DeclareFunctionExpr> Parser::ParseAST (bool lessVerbose) {
    
    unique_ptr<BlockExpr> block = ParseBlock(lessVerbose);

    cursor.goToParent();

    auto fn = make_unique<DeclareFunctionExpr>(
        false,
        false,
        START_SYMBOL,
        (vector<tuple<string, string>>){},
        std::nullopt, 
        move(block)
    );
    vector<unique_ptr<Expr>> params;
    params.push_back(make_unique<IntExpr>(0));
    // (*(fn->body))->add(make_unique<CallFuncExpr>(EXIT_SYMBOL, move(params)));
    return fn;
}

GeneralType Parser::ParseGeneral () {
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
    else if (type == "classDecl") return ParseClass();
    // else if (type == "return") return ParseReturn();
    else {
        throw invalid_argument((std::string("Invalid type when parsing general: ")+type).c_str());
    }
    // ts_tree_cursor_reset(cursor, currentNode);
    return unique_ptr<Expr>(nullptr);
}