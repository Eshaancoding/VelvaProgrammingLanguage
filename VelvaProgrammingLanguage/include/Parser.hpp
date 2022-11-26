#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <memory.h>
#include <map>
#include <variant>
#include <cmath>
#include <tuple>

/****** TODO ******
 * Add paranthesis parser, and add to probably ParsePrimary
 * Add comment parser
 * Add type attribute in ParseExpression
 * Fix bugs (param bugs)
 * Test everything!
 * Organize functions based on general info (e.i multiple function declaration of Parser class into one .cpp file)
*******************/

class Parser {
private:
    Token* currentToken;
    Lexer lexer;
    vector<string> keywords;
    int should_stop_parsing_expr;

    /** 
     * @brief Get's token precendence from currentToken. Does assign the next token to a non-operation token afterwards. Defined in ParseExpressions.cpp.
     * @returns a pair of integer and string where the the int represents the precendence and the string returns the operation (ex: >=, =, <, +, etc.). The higher the precendence (*, /), the higher the number. If it is not an operation, then it returns -1 
    */
    pair<int, string> ParseOperation ();

public: 
    /**
     * @brief Initializes Parser. Declared in MainParser.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (char* filename); 

    /**
     * @brief Parses variable declaration (ex: `int a = 3` or `double a = 5.0`). Called from MainParser
     * @returns A variable declare expr node, declared in AST.hpp
    */    
    optional<unique_ptr<VarDeclareExpr>> ParseVariableDeclaration(bool is_floating_point);

    /**
     * @brief Parses strings (ex: "hello ${x}" with formatting x as a variable). You could enter expressions, which would call the ParseExpressions.
     * @bug Does not parse the expression yet! Actually, it is not even finished...
     * @returns A string expr node, declared in the AST.
    */
    optional<unique_ptr<StringExpr>> ParseString (); 

    /**
     * @brief Parses variable uses, integers, strings, call expr, or float. This is a helper function for parse expressions.
     * @returns a general expression. Could be a variety of child classes from Expr, such as IntExpr, FloatExpr, CallFuncExpr, or StringExpr (calls ParseString)
    */
    optional<unique_ptr<Expr>> ParsePrimary ();

    /**
     * @brief Parses binary expression based upon precendence (see private variable BinaryOpPrecedence). Helper function for ParsePrimary, and it is declared in ParseExpression.cpp.
     * @param LHS The left hand side of the operation
     * @return Returns an expr, which could be from ParsePrimary (no binary operation found) or an actual Binary Expression
    */
    optional<unique_ptr<Expr>> ParseBinaryOp (std::unique_ptr<Expr> LHS, optional<pair<int, string>> operationParse = {});

    /**
     * @brief Parses complex expressions such as (`x + y + 2 + "sdf"`)
     * @return Returns an expression, which could either be from ParsePrimary (FloatExpr, IntExpr, etc.) or a binary operation.
    */
    optional<unique_ptr<Expr>> ParseExpression ();

    /// @brief Will be deleted!! This is suppose to be part of the FFI functions in ParseCallExpr and in the CallFuncExpr AST node.
    optional<unique_ptr<PrintExpr>> ParsePrintDeclaration(); 

    /**
     * @brief Parses declare functions.
     * @param isPure adds if the function is pure or not by keyword: pure
     * @bug does not parse the body function. Just assumes empty body for now
    */ 
    optional<unique_ptr<DeclareFunctionExpr>> ParseDeclareFunctionExpr (bool isPure);

    /**
     * @brief Parses assign expression varaibles (ex: `a = 3`). Does not check if variable is floating point or not (doesn't know any information of the variable name). 
     * @param varName the variable name for parsing assign expr
    */ 
    optional<unique_ptr<AssignExpr>> ParseAssignExpr (string varName);

    /**
     * @brief Parses calls to functions (ex: `function(3, 2, 3)`).
     * @param funcName the function name to the Call Func Expr 
     * @bug does not parse expression as part of the parameters YET!!
    */  
    optional<unique_ptr<CallFuncExpr>> ParseCallExpr (string funcName);

    /**
     * @brief The main parser, which would go though the file and return the AST Expr nodes. 
     * @return a boolean that indicates whether it successfully parsed the file or something went wrong (ex: syntax error)
     * @bug This will have an entire while loop in it, but what we want is just to parse just lines or expressions. We should also return an optional<unique_ptr<Expr>>. The reason being is because when we call ParseDeclareFunctionExpr, we could cal the MainParser to construct the BODY of the actual function itself.
     * @bug doesn't actually generate the IR.
    */
    bool MainParser ();
};

#endif