#include "AST.hpp"
#include "Utils.hpp"
#include <iostream>
#include <variant>
#include <tuple>
using namespace llvm;
using namespace std;

// HI help me fix errors
// btw the C++14 "optional is not a template" are gone I changed my .vscode_settings
// uhh we should be using 17

// Yeah I know wait follow me for a se

optional<Value *> IntExpr::codegen(CompilationContext &ctx)
{
    return ConstantInt::get(*ctx.context, APInt(numBits, num));
}

optional<Value *> FloatExpr::codegen(CompilationContext &ctx)
{
    return ConstantFP::get(*ctx.context, APFloat(decimal));
}

std::optional<Value *> CallFuncExpr::codegen(CompilationContext &ctx)
{
    Function *calleeF = ctx.mod->getFunction(functionName);
    if (calleeF->arg_size() != params.size())
    {
        // WE NEED ERROR HANDLING HERE AHHHHHHHHHHHHHHHHHHHHHHH CAN'T USE LEXER
        //Honestly this should be an assertion — an error like this should be caught in the parser, not here////////
        return {};
    }

    vector<Value *> argv;

    for (int i = 0; i != params.size(); ++i)
    {
        std::optional<Value*> codeGenParam = params[i]->codegen(ctx);
        if (codeGenParam)
            argv.push_back(*codeGenParam);
        else
            return {}; // WE NEED ERROR HANDLING AHHHHHHHHHHHHHHHH
    }
    return ctx.builder->CreateCall(calleeF, argv, "calltmp");
}

// - Beshaan Barkataki, 2022, procrastinate 5 homework assigments and 8 tests day next week 
// optional<Value *> StringExpr::codegen(CompilationContext &ctx)
// {
//     vector<ConstantInt> charArr;
//     for (auto &value : text)
//     {
//         visit(Overload(
//                   [&](string &s)
//                   {
//                       charArr.push_back(ConstantInt::get(*ctx.context, APInt((int) value)));
//                   },
//                   [&](unique_ptr<Expr> &expr)
//                   { /* TODO */ }),
//               text);
//     }
// }

optional<Function *> DeclareFunctionExpr::codegen(CompilationContext &ctx)
{
    std::vector<Type *> paramTypes(params.size());
    for (auto &param : params)
    {
        if (get<0>(param) == "int") {
            paramTypes.push_back(Type::getInt32Ty(*ctx.context));
        } 
        else if (get<0>(param) == "double") {
            paramTypes.push_back(Type::getDoubleTy(*ctx.context));
        } 
        // TODO: ADD STRING LATER
    }

    Type *retType;
    
    if (returnType) {
        if (*returnType == "int") {
            retType = Type::getInt32Ty(*ctx.context);
        } 
        else if (*returnType == "double") {
            retType = Type::getDoubleTy(*ctx.context);
        }
        else {
            retType = Type::getVoidTy(*ctx.context);
        }
        // else if (*returnType == "string") {
        // TODO: we do this later 
        // }
    } else {
        return {};
    }
    // switch (*returnType)
    // {
    // case "int":
    //     retType = Type::getInt32Ty(*ctx.context);
    //     break;
    // case "double":
    //     retType = Type::getDoubleTy(*ctx.context);
    //     break;
    // case "string":
    //     // to be done because complicated
    //     break;
    // default:
    //     retType = Type::getVoidTy(*ctx.context);
    //     break;
    // }

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, name, ctx.mod.get());

    unsigned Idx = 0;
    for (auto &Arg : F->args())
    {
        Arg.setName(get<1>(params[Idx]));
        Idx++;
    }

    return F;
}

optional<Value *> VarUseExpr::codegen(CompilationContext &ctx)
{
    optional<Value *> V = ctx.namedValues[var];
    // return ctx.builder->CreateLoad(V, var.c_str()); // why do we need to create load???
    return V;
}

void VarDeclareExpr::alloc(CompilationContext &ctx)
{
    // needs scope declarations to add the memory allocation for the right areas
    // for now just adding to the global builder
    Type *t;
    if (type == "int") 
        t = Type::getInt32Ty(*ctx.context);
    else if (type == "float")
        t = Type::getDoubleTy(*ctx.context);
    
    auto alloca = ctx.builder->CreateAlloca(t, 0, name.c_str());
    ctx.namedValues[name] = alloca;
}

// need to add scope for vardeclare and test
// need to add assignment allocation
// probably move variable memory allocation to new file

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    return nullopt; // for now, we are going to declare it nullopt until we actually define the IR lol
};  

optional<Value*> PrintExpr::codegen (CompilationContext &ctx) {
    return nullopt; // we need to evaluate the expression, and then we need to print somehow
}