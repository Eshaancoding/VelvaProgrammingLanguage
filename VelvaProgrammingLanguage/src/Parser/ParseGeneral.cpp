#include "Parser.hpp"

optional<unique_ptr<Expr>> Parser::parseStatement () {
    if (currentToken->isIdent()) {
        std::string name = currentToken->getName();
        if (name == "int") return ParseVariableDeclaration(false);
        else if (name == "float") return ParseVariableDeclaration(true);
        else if (name == "if") return ParseBranch();
        else if (name == "while") return ParseWhile();
        else if (name == "for") return ParseFor();
        else {
            currentToken = lexer.getToken();
            if (currentToken->getCharacters() == "(") return ParseCallExpr(name);
            else if (currentToken->getCharacters() == "=") return ParseAssignExpr(name);
            else {
                lexer.log_err("Expected function call statement or assignment statement after identifier");
                return nullopt;
            }
        }
    } else {
        lexer.log_err("Expected identifier token when parsing statement.");
        return nullopt;
    }
}

optional<unique_ptr<DeclareFunctionExpr>> Parser::parseFunction () {
    if (currentToken->isIdent()) {
        std::string name = currentToken->getName();
        if (name == "pure") return ParseDeclareFunctionExpr(true);
        else if (name == "func") return ParseDeclareFunctionExpr(false);
        else {
            lexer.log_err("Unexpected identifier name when parsing function");
            return nullopt;
        }
    } else {
        lexer.log_err("Expected identifier token when parsing function.");
        return nullopt;
    }
}

int Parser::getTypeCode () {
    vector<string> functionKeywords = {"pure", "func"};
    vector<string> classKeywords = {"class"}; // later will be implemented. Just declared here just in case.
    if (currentToken->isIdent()) {
        string name = currentToken->getName(); 
        if (std::find(functionKeywords.begin(), functionKeywords.end(), name) != functionKeywords.end()) return 1;
        else if (std::find(classKeywords.begin(), classKeywords.end(), name) != classKeywords.end()) return 2;
        else return 0;
    } else {
        lexer.log_err("Expected starting statement to be an identifier");
        return -1;
    }
}