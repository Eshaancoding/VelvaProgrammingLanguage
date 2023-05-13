#include "AST.hpp"

optional<Value*> ClassExpr::codegen(CompilationContext &ctx) {
    // get types of all vars 
    vector<Type*> varTypes;
    for (int i = 0; i < variables.size(); i++) {
        varTypes.push_back(ctx.convertToLLVMType(variables[i].type));
    }
    
    // create struct
    StructType* st = StructType::create(*ctx.context, varTypes);

    // breh

     
    
    return nullopt;        
}