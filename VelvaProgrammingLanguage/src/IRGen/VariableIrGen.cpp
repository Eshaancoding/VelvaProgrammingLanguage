#include "AST.hpp"
#include "Utils.hpp"
#include <iostream>
#include <variant>
CompilationContext::CompilationContext() : context(make_unique<LLVMContext>()), mod(make_unique<Module>("jit pog", *context)), builder(make_unique<IRBuilder<>>()), namedValues(map<string, Value*>()) {}

//We need to deal with errors later but right now let's be lazy; ok

Value *IntExpr::codegen(CompilationContext &ctx) {
    return ConstantInt::get(ctx.context, APFloat(num));
}

Value *DecimalExpr::codegen(CompilationContext &ctx) {
    return ConstantFP::get(ctx.context, APFloat(decimal));
}

Value *CallFuncExpr::codegen(CompilationContext &ctx) {
    Function *calleeF = ctx.mod->getFunction(functionName);
    assert(calleeF);
    if(calleeF->arg_size() != params.size()) { cerr << "Incorrect number of arguments"; terminate(1); }

    vector<Value*> argv;

    for(int i = 0; i != params.size(); ++i) {
        argv.push_back(params[i]->codegen());
    }

    return ctx.builder.CreateCall(calleeF, argv, "calltmp")

}

// daniel can you create a print function for IR and for AST?
// maybe it could be a variant of CallFuncExpr idk
//uh yeah that works for now but we'll ahve 
// 
// daniel for the strings should i just create an array of ints for char ascii values as the return
// Why can't you just create a std::s
// does it have support for char*? 
//that's ascii only right
// it doesnt i checked the docs, we can just do ascii values tho right
// yeah pretty much I think
// I will review the docs later, k
//wait I just realized — becuase of the way this is implemented, every object needs a to_string method that inserts instructions for string conversion
//ugh
// for the IR generation the only string support is stringref which doesnt have good memory management and does not actually work for altering and deleting the string
Value *StringExpr::codegen(CompilationContext &ctx) {
    vector<ConstantInt> charArr;
    // wait what exactly is text im a little confused as to how were storing the string there
    
    //Remember that all strings are format strings
    //So we have an array that stores all elements of the string — either as regular text, or an expression, so like each char?
    for(auto &value: text) {
        visit(Overload {
            [&charArr](string &s) { 
                charArr.push_back(ConstantInt::get(ctx.context, APInt(int(value))));
            },
            [&charArr](unique_ptr<Expr> &expr) { expr->generate_str() /* Implement leftovers and I'll implement generate_str*/ },
        }, text); 
    }
}
// for params in declar function expr dont we have to add the type with it
// and if we have to add it should we use Pair
Function *DeclareFunctionExpr::codegen() {
    std::vector<Type*> paramTypes(params.size());
}