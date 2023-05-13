#include "AST.hpp"

optional<Value*> ClassExpr::codegen(CompilationContext &ctx) {
    // get types of all vars 
    vector<Type*> varTypes;
    for (int i = 0; i < variables.size(); i++) {
        varTypes.push_back(ctx.convertToLLVMType(variables[i].type));
    }
    
    // create struct based on variables
    StructType* st = StructType::create(*ctx.context, varTypes, className);
    return nullopt;        

    // define functions
    bool definedConstruct = false;
    for (int i = 0; i < functions.size(); i++) {
        auto f = move(functions[i].expr);
        
    }
}