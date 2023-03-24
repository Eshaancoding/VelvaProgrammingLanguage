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

struct Variable {
    string type;
    Value *value;
};

struct Scope {
    unordered_map<string, Variable> varNames;                // first str: name, second int: just a palceholder 
    unordered_map<string, Variable> functionDecl; // first str: name, second str: list of types, first type is the return statement ("null" if no type)
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
        bool lessVerbose=false;
        NameRegistry names;
        CompilationContext();
        void compile();
        // ModulePassManager setOptimize(ModuleAnalysisManager& MAM);
        //void defaultOptimize();
        void pushFrame();
        void pushFrame(Scope &frame);
        void popFrame();
        Variable createVarName (string name, Variable varName);   // will return the variable name if it exists
        Variable findVarName (string varName);

        bool functionNameExists (string functionname, vector<string> types); 
        string createFunctionName (string funcName, vector<string> types);

        llvm::Type* convertToLLVMType (optional<string> type);
};



#endif 