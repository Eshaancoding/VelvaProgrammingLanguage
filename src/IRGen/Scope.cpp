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
VariableScope CompilationContext::createVarName(string varName, VariableScope var) {
    if (scopes.back().varNames.count(varName) > 0) throw invalid_argument("Variable already exists in scope.");
    scopes.back().varNames[varName] = var;
    return var;
}

VariableScope CompilationContext::findVarName(string varName) {
    for(vector<Scope>::reverse_iterator i = scopes.rbegin(); i != scopes.rend(); ++i) {
        if(i->varNames.count(varName) != 0) {
            return i->varNames[varName];
        }
        if (i->isFunction) break;
    }
    if(globals.varNames.count(varName) != 0) return globals.varNames[varName];
    throw invalid_argument("No variable by the name of '" + varName + "'");
}

// function type
string CompilationContext::createFunctionName (optional<string> returnType, string funcName, vector<string> types) {
    string n = funcName;
    bool isDiffParams = false;
    auto fullScopes = scopes; fullScopes.push_back(globals);
    for(vector<Scope>::reverse_iterator i = fullScopes.rbegin(); i != fullScopes.rend(); ++i) {
        for (auto func : i->functions) {
            // if func has same name but different params
            if (func.prefixName == funcName && func.params != types) isDiffParams = true;
            // same name same param types, then throw error
            else if (func.prefixName == funcName && func.params == types) 
                throw invalid_argument("Function with same params already declared");
        }
    }
    if (isDiffParams) 
        n = names.use(funcName);

    string newRet = "";
    if (returnType) newRet = *returnType;
    else newRet = "void";
    scopes.back().functions.push_back(FunctionScope {funcName, n, types, newRet});

    return n;
}

FunctionScope CompilationContext::findFuncName (string funcName, vector<string> types) {
    auto fullScopes = scopes; fullScopes.push_back(globals);
    for (vector<Scope>::reverse_iterator i = fullScopes.rbegin(); i != fullScopes.rend(); ++i) {
        for (auto func : i->functions) {
            if (func.prefixName == funcName && types == func.params) return func;
        }
    }
    throw invalid_argument("Invalid function call: no function found");
}

// return type
llvm::Type* CompilationContext::convertToLLVMType (optional<string> type) {
    if (!type) return Type::getVoidTy(*context);
    return *type == "int" ? Type::getInt32Ty(*context)
        : *type == "float" ? Type::getFloatTy(*context)
        : *type == "double" ? Type::getDoubleTy(*context)
        : *type == "string" ? Type::getInt8PtrTy(*context)
        : *type == "bool" ? Type::getInt1Ty(*context)
        : Type::getVoidTy(*context);
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