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
    currentToken = lexer.getToken(); // eat func 
    if (!currentToken->isIdent()) {
        lexer.log_err("Expected function name.");
    }
    
    string func_name = currentToken->getName();    
    currentToken = lexer.getToken(); // eat func_name, get (
    if (!currentToken->isChar() || currentToken->getCharacter() != '(') {
        lexer.log_err("Expected (");
        return nullopt;
    }

    // Get params
    vector<tuple<string, string> > params;
    currentToken = lexer.getToken(); // eat ( start parsing env 
    while (true) {
        // parse int, float type argument
        if (!currentToken->isIdent()) {
            lexer.log_err("Expected type variable.");
            return nullopt;
        }
        string var_type = currentToken->getName();
        
        currentToken = lexer.getToken(); // get argument name 
        
        // then get the var name
        if (!currentToken->isIdent()) {
            lexer.log_err("Expected argument name.");
            return nullopt;
        }
        string var_name = currentToken->getName();

        currentToken = lexer.getToken(); // eat argument name, get char , or )
        if (!currentToken->isChar()) {
            lexer.log_err("Expected character , or )");
            return nullopt;
        }
        
        // append to params
        tuple<string, string> tup = make_tuple(var_type, var_name);
        params.push_back((tuple<string, string>)make_tuple(var_type, var_name));
        
        // End of function
        char character = currentToken->getCharacter();
        if (character == ')') {
            break;
        } 
        else if (character != ',') {
            lexer.log_err("Expected character , or )");
            return nullopt;
        }
        currentToken = lexer.getToken(); // eat char, get next type variable argument 
    }
    
    // get return type, if there is any
    currentToken = lexer.getToken(); // eat ), get char  
    optional<std::string> returnType = nullopt;
    if (currentToken->getCharacter() == '-') {
        // means we are returning the type
        currentToken = lexer.getToken();   
        if (currentToken->getCharacter() != '>') {
            lexer.log_err("Expected >");
            return nullopt;
        }
        currentToken = lexer.getToken();   
        returnType = currentToken->getName();
        currentToken = lexer.getToken();   
        if (currentToken->getCharacter() != '{') {
            lexer.log_err("Expected {");
            return nullopt;
        }
    } 
    else if (currentToken->getCharacter() != '{') {
        lexer.log_err("Expected { or -");
        return nullopt;
    }

    // parse body inside the function, but we don't even have expressions yet lololol
    
    // for now we are just going to parse in an empty function
    currentToken = lexer.getToken();
    if (currentToken->getCharacter() != '}') {
        lexer.log_err("Expected character }");
        return nullopt;
    }

    return make_unique<DeclareFunctionExpr>(false, isPure, func_name, params, returnType);
}