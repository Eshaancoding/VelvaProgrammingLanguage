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
#include <stdio.h>

/****** TODO ******
 * finish string parser
 * Add paranthesis parser, and add to probably ParsePrimary
 * Add comment parser
 * Add return parser
 * Fix can't parse if new line at the end.
 * Add type attribute in ParseExpression
 * Add if statement parser
 * Fix bugs (param bugs)
 * Test everything!
 * Organize functions based on general info (e.i multiple function declaration of Parser class into one .cpp file)
*******************/

class Parser {
private:
    vector<string> keywords;
    int should_stop_parsing_expr;

    /** 
     * @brief Get's token precendence from currentToken. Does assign the next token to a non-operation token afterwards. Defined in ParseExpressions.cpp.
     * @returns a pair of integer and string where the the int represents the precendence and the string returns the operation (ex: >=, =, <, +, etc.). The higher the precendence (*, /), the higher the number. If it is not an operation, then it returns -1 
    */
    pair<int, string> ParseOperation ();

public: 
    unique_ptr<Token> currentToken;
    Lexer lexer;
    /**
     * @brief Initializes Parser. Declared in ParserInit.cpp
     * @param filename the path to the filename that it should be parsing.
    */
    Parser (char* filename); 

    /**
     * @brief Helper function to print the current token. Declared in ParserInit.cpp
    */
    void printCurrentToken ();

    /**
     * @brief Helper function to advance to next token. Declared in ParserInit.cpp
    */
    void getNextToken ();

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
     * @brief Parses an list of statements until it ends at the end_char. Useful for parsing if statements, while loops, etc. Defined in the ParseBranch.cpp
     * 
     * @param end_char the end character where parsing statements should stop
     * @return * optional<vector<unique_ptr<Expr>>> Returns an list of potiners of Expressions parent class. Optional is if there's exists an error while parsing any of the statements.
     * @bug Doesn't parses functions declarations!! we might need to apply a map or create a new struct, which is annoying ngl
     */
    optional<vector<unique_ptr<Expr>>> ParseBlock (string end_char = "}");

    /**
     * @brief Parses variable uses, integers, strings, call expr, or float. This is a helper function for parse expressions.
     * @returns a general expression. Could be a variety of child classes from Expr, such as IntExpr, FloatExpr, CallFuncExpr, or StringExpr (calls ParseString).
    */
    optional<unique_ptr<Expr>> ParsePrimary ();

    /**
     * @brief Parses a while loop function assuming the while keyword ahs already been taken in, begins at taking in the parenthesis for the conditional
     * @returns AST for WhileExpr including the AST for the conditional created with ParseExpression and the AST for the body created with ParseBlock
     */

    optional<unique_ptr<WhileExpr>> ParseWhile ();

    /**
     * @brief Parses a for loop
     * @returns ForExpr AST
     */

    // optional<unique_ptr<ForExpr>> ParseFor (); // no IR generated yet so we are commenting it out for now

    /**
     * @brief Parses binary expression based upon precendence (see private variable BinaryOpPrecedence). Helper function for ParsePrimary, and it is declared in ParseExpression.cpp.
     * @param LHS The left hand side of the operation
     * @return Returns an expr, which could be from ParsePrimary (no binary operation found) or an actual Binary Expression.
    */
    optional<unique_ptr<Expr>> ParseBinaryOp (unique_ptr<Expr> LHS, optional<pair<int, string>> operationParse = {});

    /**
     * @brief Parses complex expressions such as (`x + y + 2 + "sdf"`)
     * @return Returns an expression, which could either be from ParsePrimary (FloatExpr, IntExpr, etc.) or a binary operation.
    */
    optional<unique_ptr<Expr>> ParseExpression ();

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
    * @brief Parses if, else if, or else statements 
    */
    optional<unique_ptr<BranchExpr>> ParseBranch (); 

    /**
     * @brief Parse regular statements. Assumes that the token starts on the first token on the line (will end on the first token of the second line). Used by MainParser. Defined in ParseGeneral.cpp
     * @return Returns an unique_ptr expression 
    */
    optional<unique_ptr<Expr>> parseStatement (); 

    /**
     * @brief Parse function declaration. Defined in ParseGeneral.cpp
     * @return returns a declare function expr, which is unique since the codegen() returns a function class rather than a value class (like the other expressions)
    */
    optional<unique_ptr<DeclareFunctionExpr>> parseFunction ();

    /**
     * @brief Parse return statement. Defined in ParserReturn.cpp
     * @return returns a return statement AST
    */
    optional<unique_ptr<ReturnStateExpr>> ParseReturn ();

    /**
     * @brief Defines which type of code is in the current line of the parser. Defined in ParseGeneral.cpp
     * @return returns an integer. 0 if it is a statement, 1 if it is a function, and 2 if it is a class
    */
    int getTypeCode ();
};

#endif