#include "CompilationContext.hpp"

void CompilationContext::pushFrame() {
    scopes.push_back(Scope());
}
// add frame
void CompilationContext::pushFrame(Scope &frame) {
    scopes.push_back(frame);
}

void CompilationContext::popFrame() {
    scopes.pop_back();
}

// variable handling
Variable CompilationContext::createVarName(string varName, Variable var) {
    scopes.back().varNames[varName] = var;
    return var;
}

Variable CompilationContext::findVarName(string varName) {
    for(vector<Scope>::reverse_iterator i = scopes.rbegin(); i != scopes.rend(); ++i) {
        if(i->varNames.count(varName) != 0) {
            return i->varNames[varName];
        }
    }
    if(globals.varNames.count(varName) != 0) return globals.varNames[varName];
    throw invalid_argument("No variable by the name of '" + varName + "'");
}

// function type
string CompilationContext::createFunctionName (string funcName, vector<string> types) {

}

/*
List of rules:

in scopes like if statements or while or for loops: 
* you can reuse variable names that are outside of the scope, however it will be deleted after end of scope

int x = 0; // x.0 
for (int v = 0; v < 0; v++) {
    int x = 2; // x.1
}
x // refers to 2

* you can access variables that are outside of the scope IF IN NONFUNCTION SCOPES




In scopes like functions or while loops

* you cannot use variables that are outside of the function scope
    * (maybe possible with global in the future)
* if there is an if statement inside the function scope, it can only be limited to that function scope
    * basically go down of the scopes until you reach the function scope.
*/