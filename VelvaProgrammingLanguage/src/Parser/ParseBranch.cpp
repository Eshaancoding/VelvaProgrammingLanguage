#include "Parser.hpp"

optional<unique_ptr<BranchExpr>> Parser::ParseBranch () {
    map<optional<unique_ptr<Expr>>, vector<unique_ptr<Expr>>> ifMap;

    // then, parse the expression
    bool is_parsing_body = false;
    vector<unique_ptr<Expr>> body = {};     
    optional<unique_ptr<Expr>> conditional = nullopt;
    while (true) {
        if (!is_parsing_body) { // starts at () 
            // parse the if statement
            currentToken = lexer.getToken();
            if (currentToken->getCharacters() != "(") {
                lexer.log_err("Expected ("); 
                return nullopt;
            }

            conditional = ParseExpression();
            if (!conditional) return nullopt;

            if (currentToken->getCharacters() != ")") {
                lexer.log_err("Expected )"); 
                return nullopt;
            }
            currentToken = lexer.getToken();

            if (currentToken->getCharacters() != "{") {
                lexer.log_err("Expected {");
                return nullopt;
            }
            currentToken = lexer.getToken();

            // we are parsing body next
            is_parsing_body = true;

            // set conditional
            conditional = move(*conditional);
        } else { // starts at {}
            // parse statement
            optional<unique_ptr<Expr>> statement = parseStatement();
            if (!statement) return nullopt;

            if (currentToken->getCharacters() == "}") {
                // append to ifmap
                ifmap[conditional] = body

                // get next character
                currentToken = lexer.getToken();
                if (currentToken->getName() == "else") {
                    currentToken = lexer.getToken();
                    if (currentToken->getName() == "if") {
                        is_parsing_body = false; 
                        currentToken = lexer.getToken();
                    } 
                    body = {};
                    conditional = nullopt;
                    continue;
                } else {
                    break; // end of for loop
                }
            } 
            else body.push_back(move(*statement));
        }

    } 
    
    return make_unique<BranchExpr>(ifMap);
}