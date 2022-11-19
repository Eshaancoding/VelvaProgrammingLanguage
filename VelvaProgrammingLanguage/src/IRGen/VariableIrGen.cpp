#include "AST.hpp"
#include "Utils.hpp"
#include <iostream>
#include <variant>
#include <tuple>
CompilationContext::CompilationContext() : context(make_unique<LLVMContext>()), mod(make_unique<Module>("jit pog", *context)), builder(make_unique<IRBuilder<>>()), namedValues(map<string, Value*>()) {}
using namespace llvm;
using namespace std;

//We need to deal with errors later but right now let's be lazy; ok

Value *IntExpr::codegen(CompilationContext &ctx) {
    return ConstantInt::get(ctx.context, APInt(numBits, num));
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

Value *StringExpr::codegen(CompilationContext &ctx) {
    vector<ConstantInt> charArr;
    for(auto &value: text) {
        visit(Overload (
            [&charArr, &ctx](string &s) { 
                charArr.push_back(ConstantInt::get(ctx.context, APInt(int(value))));
            },
            [&charArr, &ctx](unique_ptr<Expr> &expr) { expr->generate_str() /* Implement leftovers and I'll implement generate_str*/ }
        ), text); 
    }
}

Function *DeclareFunctionExpr::codegen(CompilationContext &ctx) {
    std::vector<Type*> paramTypes(params.size());
    for(auto &param : params) {
        switch(get<0>(param)) {
            case "int":
                paramTypes.push_back(Type::getInt32Ty(ctx.context));
            case "double":
                paramTypes.push_back(Type::getDoubleTy(ctx.context));
            case "string":
                // to be done because complicated
        }
    }

    Type *retType;
    switch(returnType) {
            case "int":
                retType = Type::getInt32Ty(ctx.context);
                break;
            case "double":
                retType = Type::getDoubleTy(ctx.context);
                break;
            case "string":
                // to be done because complicated
                break;
            default:
                retType = Type::getVoidTy(ctx.context);
                break;
        }

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, name, ctx.mod.get());

    unsigned Idx = 0;
    for(auto &Arg : F->args()) {
        Arg.setName(get<1>(params[Idx]));
        Idx++;
    }

    return F;
}

Value *VarUseExpr::codegen(CompilationContext &ctx) {
    Value *V = NamedValues[var];
    return ctx.builder.CreateLoad(V, name.c_str());
}

void VarDeclareExpr::alloc(CompilationContext &ctx) {
    // needs scope declarations to add the memory allocation for the right areas
    // for now just adding to the global builder
    Type *t;
    switch(type) {
        case "int":
            t = Type::getInt32Ty(ctx.context);
        case "double":
            t = Type.getDoubleTy(ctx.context);
    }

    auto alloca = ctx.builder.CreateAlloca(t, 0, name.c_str());
    ctx.namedValues[name] = alloca;
}

// need to add scope for vardeclare and test
// need to add assignment allocation 
// probably move variable memory allocation to new file