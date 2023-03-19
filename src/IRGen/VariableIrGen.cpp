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
    auto v = ctx.namedValues[var];
    return ctx.builder->CreateLoad(Type::getInt32Ty(*ctx.context), v, var.c_str());
}

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    auto retType = type == "int" ? Type::getInt32Ty(*ctx.context)
        : type == "float" ? Type::getFloatTy(*ctx.context)
        : type == "double" ? Type::getDoubleTy(*ctx.context)
        : type == "string" ? Type::getInt8PtrTy(*ctx.context)
        : Type::getVoidTy(*ctx.context);   

    AllocaInst *inst = ctx.builder->CreateAlloca(retType, 0, name.c_str());
    ctx.namedValues[name] = inst;
    auto rhs = value->codegen(ctx);
    if (!rhs)
        return {};
    auto s = ctx.builder->CreateStore(*rhs, inst);
    // s->setVolatile(true);
    return s;
};  

optional<Value*> AssignExpr::codegen (CompilationContext &ctx) {
    return ctx.builder->CreateStore(*(value->codegen(ctx)), ctx.namedValues[varName]);
}
