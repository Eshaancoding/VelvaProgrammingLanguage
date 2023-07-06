#ifndef COMPILATION_CONTEXT
#define COMPILATION_CONTEXT
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
#include <functional>
#include <variant>
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/Value.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
using namespace std;
using namespace llvm;

class NameRegistry {
    private:
        map<string, int> names;
    public:
        string use(const string &prefix);
};

struct ClassScope {
    string name;
    StructType* type;
};

struct VariableScope {
    string type;
    Value *value;
};

struct FunctionScope {
    string prefixName;
    string name;
    vector<string> params;
    string returnType;
};

struct Scope {
    unordered_map<string, VariableScope> varNames;                // first str: name, second int: just a palceholder 
    vector<FunctionScope> functions;
    vector<ClassScope> classes;
    bool isFunction; // if it is a function, then it doesn't include variables previous of the scope.
};
/**
 * @brief This object stores variables for a compilation context. Only use this once per compile task.
 * 
 */
struct CompilationContext {
    public:
        std::unique_ptr<LLVMContext> context;
        std::unique_ptr<IRBuilder<>> builder;
        std::unique_ptr<Module> mod;

        vector<Scope> scopes;
        Scope globals;

        //std::unique_ptr<FunctionPassManager> fpm;
        NameRegistry names;
        CompilationContext();
        void compile();
        // ModulePassManager setOptimize(ModuleAnalysisManager& MAM);
        //void defaultOptimize();
        void pushFrame(bool isFunction=false);
        void pushFrame(Scope &frame);
        void popFrame();
        VariableScope createVarName (string name, VariableScope varName);   // will return the variable name if it exists
        VariableScope findVarName (string varName);

        FunctionScope findFuncName (string funcName, vector<string> types);
        string createFunctionName (optional<string> returnType, string funcName, vector<string> types);

        ClassScope createClass (string name, StructType* type);
        ClassScope findClass (string name);

        llvm::Type* convertToLLVMType (optional<string> type);
        optional<llvm::Value*> getDefaultValue (string type);
};

#endif 