#include "CompilationContext.hpp"


void CompilationContext::pushFrame(bool isFunction) {
    if (this->createToGlobal) {
        globals.isFunction = isFunction;
    } else {
        auto sc = Scope();
        sc.isFunction = isFunction;
        scopes.push_back(sc);
    }
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
    
    if (this->createToGlobal) {
        if (globals.varNames.count(varName) > 0) throw invalid_argument("Variable already exists in scope.");
        globals.varNames[varName] = var;
    } else {
        if (scopes.back().varNames.count(varName) > 0) throw invalid_argument("Variable already exists in scope.");
        scopes.back().varNames[varName] = var;
    }
    return var;
}

variant<VariableScope, ClassScope> CompilationContext::findVarName(string varName) {
    auto fullScopes = scopes; fullScopes.push_back(globals);
    for(vector<Scope>::reverse_iterator i = fullScopes.rbegin(); i != fullScopes.rend(); ++i) {
        if(i->varNames.count(varName) != 0) return i->varNames[varName];
        if (i->isFunction && runningClass == "") break;
    }

    // if we are comiling class it might be a class scope thing
    if (runningClass != "" && this->classesDefined.rbegin() != this->classesDefined.rend())
        return this->classesDefined.rbegin()->second;

    throw invalid_argument("No variable by the name of '" + varName + "'");
}

// function type
string CompilationContext::createFunctionName (optional<string> returnType, string funcName, vector<string> types, bool isPrivate) {
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
    auto fscope = FunctionScope {funcName, n, types, newRet, isPrivate};
    if (this->createToGlobal) 
        globals.functions.push_back(fscope);
    else
        scopes.back().functions.push_back(fscope);

    return n;
}

FunctionScope CompilationContext::findFuncName (string funcName, vector<string> types) {
    auto fullScopes = scopes; fullScopes.push_back(globals);
    for (vector<Scope>::reverse_iterator i = fullScopes.rbegin(); i != fullScopes.rend(); ++i) {
        for (auto func : i->functions) {
            if (func.prefixName == funcName && types == func.params) return func;
        }
    }
    throw invalid_argument("Invalid function call: no function found: " + funcName);
}

// classes
ClassScope CompilationContext::createClass (string name, StructType* type, Type* pointerType, vector<VarTemplate> variables) {
    // assert thats in global scope
    if (scopes.size() != 2) throw invalid_argument("Class must be declared in global scope.");

    // check whether we didn't declare any of the classes before
    if (this->classesDefined.find(name) != this->classesDefined.end()) throw invalid_argument("Class already defined.");

    // if not any of these conditions, then we can push scope 
    ClassScope c = {name, type, pointerType, variables, {}};
    this->classesDefined[name] = c;
    return c;
}

// really this function is only used when defining functions within in the class
ClassScope CompilationContext::findClass (string name) {
    if (this->classesDefined.find(name) != this->classesDefined.end()) 
        return this->classesDefined[name];
    throw invalid_argument("Invalid class name.");
}