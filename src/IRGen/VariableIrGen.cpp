#include "AST.hpp"
#include "llvm/Passes/PassBuilder.h"

// ********************************** TYPES **********************************
optional<Value *> IntExpr::codegen(CompilationContext &ctx)
{
    return ConstantInt::get(*ctx.context, APInt(numBits, num));
}

optional<Value *> FloatExpr::codegen(CompilationContext &ctx)
{
    return ConstantFP::get(*ctx.context, APFloat(decimal));
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

    auto globalDecl = (GlobalVariable*) ctx.mod->getOrInsertGlobal(ctx.names.use(".str"), stringType);
    globalDecl->setInitializer(ConstantArray::get(stringType, chars));
    globalDecl->setConstant(true);
    globalDecl->setLinkage(GlobalValue::LinkageTypes::PrivateLinkage);
    globalDecl->setUnnamedAddr(GlobalValue::UnnamedAddr::Global);

    return ConstantExpr::getBitCast(globalDecl, i8->getPointerTo());
}

// ********************************** Variable uses/decl/assign **********************************
optional<Value *> VarUseExpr::codegen(CompilationContext &ctx)
{
    auto v = ctx.findVarName(var);
    retType = v.type;
    return ctx.builder->CreateLoad(ctx.convertToLLVMType(v.type), v.value, var.c_str());
}

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    string ty;
    llvm::Type* retType; 
    llvm::Value* val;

    // get value & type
    if (value) {  // value defined
        auto typeExpr = (*value)->return_type();

        // allow casting between bool and int
        bool isIntBool = (typeArg && *typeArg == "bool" && typeExpr == "int");
        if (typeArg && *typeArg != typeExpr && !isIntBool)
            throw invalid_argument("not same type");
        if (isIntBool) typeExpr = "bool";
        ty = typeExpr;
        retType = ctx.convertToLLVMType(typeExpr);

        // codegen value
        auto res = (*value)->codegen(ctx);
        if (!res) throw invalid_argument("Value undefined");
        
        val = *res;

    } else if (!typeArg && !value) {
        throw invalid_argument("Cannot declare auto with no assigment.");
    }
    else {
        // we have a type defined, but no value; get from default value
        ty = *typeArg;
        retType = ctx.convertToLLVMType(ty);
        auto res = ctx.getDefaultValue(ty);
        if (!res) throw invalid_argument("Default value undefined.");
        val = *res;
    }

    AllocaInst *inst = ctx.builder->CreateAlloca(retType, 0, name.c_str());
    ctx.createVarName(name, VariableScope { ty, inst });
    
    auto s = ctx.builder->CreateStore(val, inst);
    // s->setVolatile(true);
    return s;
};  

optional<Value*> AssignExpr::codegen (CompilationContext &ctx) {
    return ctx.builder->CreateStore(*(value->codegen(ctx)), ctx.findVarName(varName).value);
}
