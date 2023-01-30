#include "Parser.hpp"

/* 
Example Syntax:
func addToResult (int a, int b)  {
	self.result = a + b;
}
To return:
func addToResult (int a, int b) -> int {
	self.result = a + b;
}
*/
optional<unique_ptr<DeclareFunctionExpr>> Parser::ParseDeclareFunctionExpr (bool isPure) {
    currentToken = move(lexer.getToken()); // eat func 
    if (!currentToken->isIdent()) {
        lexer.log_err("Expected function name.");
    }
    
    string func_name = currentToken->getName();    
    currentToken = move(lexer.getToken()); // eat func_name, get (
    if (currentToken->getCharacters() != "(") {
        lexer.log_err("Expected (");
        return nullopt;
    }

    // Get params
    vector<tuple<string, string> > params;
    currentToken = move(lexer.getToken()); // eat ( start parsing env 
    while (true) {
        // parse int, float type argument
        if (!currentToken->isIdent()) {
            lexer.log_err("Expected type variable.");
            return nullopt;
        }
        string var_type = currentToken->getName();
        
        currentToken = move(lexer.getToken()); // get argument name 
        
        // then get the var name
        if (!currentToken->isIdent()) {
            lexer.log_err("Expected argument name.");
            return nullopt;
        }
        string var_name = currentToken->getName();

        currentToken = move(lexer.getToken()); // eat argument name, get char , or )
        if (!currentToken->isChar()) {
            lexer.log_err("Expected character , or )");
            return nullopt;
        }
        
        // append to params
        tuple<string, string> tup = make_tuple(var_type, var_name);
        params.push_back((tuple<string, string>)make_tuple(var_type, var_name));
        
        // End of function
        string character = currentToken->getCharacters();
        if (character == ")") {
            break;
        } 
        else if (character != ",") {
            lexer.log_err("Expected character , or )");
            return nullopt;
        }
        currentToken = move(lexer.getToken()); // eat char, get next type variable argument 
    }
    
    // get return type, if there is any
    currentToken = move(lexer.getToken()); // eat ), get char  
    optional<std::string> returnType = nullopt;
    if (currentToken->getCharacters() == "-") {
        // means we are returning the type
        currentToken = move(lexer.getToken());   
        if (currentToken->getCharacters() != ">") {
            lexer.log_err("Expected >");
            return nullopt;
        }
        currentToken = move(lexer.getToken());   
        returnType = currentToken->getName();
        currentToken = move(lexer.getToken());   
        if (currentToken->getCharacters() != "{") {
            lexer.log_err("Expected {");
            return nullopt;
        }
    } 
    else if (currentToken->getCharacters() != "{") {
        lexer.log_err("Expected { or -");
        return nullopt;
    }

    currentToken = move(lexer.getToken());
    auto body = this->ParseBlock();
    if (!body) return nullopt;

    if (currentToken->getCharacters() != "}") {
        lexer.log_err("Expected character }");
        return nullopt;
    }

    currentToken = move(lexer.getToken());
    return make_unique<DeclareFunctionExpr>(false, isPure, func_name, params, returnType, move(body.value()));
    // return make_unique<DeclareFunctionExpr>(false, isPure, func_name, params, returnType, move(*body));
}