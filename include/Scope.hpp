#ifndef SCOPE
#define SCOPE

#include "AST.hpp" 
#include "TreeSitterParser.hpp"
#include <unordered_map>
using namespace std;
struct Variable {
    string type;
    Value *value;
};

struct Scope {
    unordered_map<string, int> varNames;                // first str: name, second int: just a palceholder 
    unordered_map<string, Variable> functionDecl; // first str: name, second str: list of types, first type is the return statement ("null" if no type)
    bool isFunction; // if it is a function, then it doesn't include variables previous of the scope.
};

class ProgramScope {
private:
    vector<Scope> scopes;
    int frameCounter;
public:
    ProgramScope (Scope &startingFrame) : frameCounter(0), scopes({startingFrame}) {};
    void addFrame(Scope &frame);
    void deleteLastFrame ();
    void createVarName (string name, Variable varName);   // will return the variable name if it exists
    Variable findVarName (string varName);

    bool functionNameExists (string functionname, vector<string> types); 
    string createFunctionName (string funcName, vector<string> types); // will return the function name (possible name mangling) if it exists

};

#endif
