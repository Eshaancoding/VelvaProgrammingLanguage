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

optional<Value *> StringExpr::codegen(CompilationContext &ctx)
{
    auto i8 = IntegerType::get(*ctx.context, 8);
    vector<Constant*> chars(text.size());
    for(int i = 0; i < text.size(); ++i) {
        chars[i] = ConstantInt::get(i8, text[i]);
    }
    chars.push_back(ConstantInt::get(i8, 0));

    auto stringType = ArrayType::get(i8, chars.size());

    auto globalDecl = (GlobalVariable*) mod->getOrInsertGlobal(".str" + to_string(StringExpr::STR_TOTAL), stringType);
    globalDecl->setInitializer(ConstantArray::get(stringType, chars));
    globalDecl->setConstant(true);
    globalDecl->setLinkage(GlobalValue::LinkageTypes::PrivateLinkage);
    globalDecl->setUnnamedAddr(GlobalValue::UnnamedAddr::Global);

    return ConstantExpr::getBitCast(v, i8->getPointerTo());
}

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
        else if (get<0>(param) == "string") {
            paramTypes.push_back(Type::getInt8PtrTy(*ctx.context));
        }
    }

    auto retType = retType == "int" ? Type::getInt32Ty(*ctx.context)
            : retType == "double" ? Type::getDoubleTy(*ctx.context)
            : retType == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getVoidTy(*ctx.context);

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
    Value *v = ctx.namedValues[var];
    // return ctx.builder->CreateLoad(V, var.c_str()); // why do we need to create load???
    return ctx.builder.CreateLoad(v);
}


// need to add scope for vardeclare and test
// need to add assignment allocation
// probably move variable memory allocation to new file

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    AllocaInst *inst = ctx.builder.CreateAlloca(type == "int" ? Type::getInt32Ty(*ctx.context)
            : type == "double" ? Type::getDoubleTy(*ctx.context)
            : type == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getVoidTy(*ctx.context),
            0,
            name.c_str());
    namedValues[name] = inst;
    Value *rhs = value->codegen();
    ctx.builder.CreateStore(rhs, inst);
};  

