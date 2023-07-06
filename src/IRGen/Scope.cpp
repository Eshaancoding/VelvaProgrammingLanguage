#include "CompilationContext.hpp"

void CompilationContext::pushFrame(ClassScope cls) {
    auto sc = Scope();
    sc.isFunction = false;
    sc.cls = cls;
    scopes.push_back(sc);
}

void CompilationContext::pushFrame(bool isFunction) {
    auto sc = Scope();
    sc.isFunction = isFunction;
    scopes.push_back(sc);
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
    // eventually expand to full list of keywords later
    if (varName == "this") throw invalid_argument("Cannot name keyword.");
    
    if (scopes.back().varNames.count(varName) > 0) throw invalid_argument("Variable already exists in scope.");
    scopes.back().varNames[varName] = var;
    return var;
}

variant<VariableScope, ClassScope> CompilationContext::findVarName(string varName) {
    auto fullScopes = scopes; fullScopes.push_back(globals);
    for(vector<Scope>::reverse_iterator i = fullScopes.rbegin(); i != fullScopes.rend(); ++i) {
        if(i->varNames.count(varName) != 0) return i->varNames[varName];
        if (i->cls && runningClass) return *i->cls;
        if (i->isFunction && !runningClass) break;
    }
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

// classes
ClassScope CompilationContext::createClass (string name, StructType* type, Type* pointerType, vector<VarTemplate> variables) {
    // check if already in name registry. If not, then create one 
    if (this->names.isUsed(name)) 
        throw invalid_argument("Class already defined.");
    this->names.use(name);

    // only one class per scope instance
    for (vector<Scope>::reverse_iterator i = scopes.rbegin(); i != scopes.rend(); ++i) { 
        if (i->cls)
            throw invalid_argument("Cannot declare a class within a class.");
    }

    // push scope 
    ClassScope c = {name, type, pointerType, variables, {}};
    this->pushFrame(c);
    return c;
}

// really this function is only used when defining functions within in the class
ClassScope CompilationContext::findClass (string name) {
    for (vector<Scope>::reverse_iterator i = scopes.rbegin(); i != scopes.rend(); ++i) { 
        if (i->cls && i->cls->name == name)
            return *i->cls; 
    }
    throw invalid_argument("Invalid class name.");
}