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
    auto result = ctx.findVarName(var);
    if (const VariableScope* v = get_if<VariableScope>(&result)) {
        retType = v->type;
        return ctx.builder->CreateLoad(ctx.convertToLLVMType(v->type), v->value, var.c_str());
    }

    if (const ClassScope* classSc = get_if<ClassScope>(&result)) {
        // search through the class scope if we can get the var name
        for (int i = 0; i < classSc->variables.size(); i++) {
            if (classSc->variables[i].expr->name == var && ctx.runningClass != "") {// check for public/private later
                retType = *classSc->variables[i].expr->typeArg;
                return ctx.builder->CreateLoad(ctx.convertToLLVMType(retType), classSc->variableValues[i], var.c_str());
            }
        }
        throw invalid_argument("Unable to find variable in class scope!");
    }
    throw invalid_argument("Reached invalid subroutine!");
}

optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    string ty;
    llvm::Type* retType; 
    llvm::Value* val;

    // get value & type
    if (value) {  // value defined
        // codegen value
        auto res = (*value)->codegen(ctx);
        if (!res) throw invalid_argument("Value undefined");
        
        // return type
        val = *res;       
        auto typeExpr = (*value)->return_type();

        // allow casting between bool and int
        bool isIntBool = (typeArg && *typeArg == "bool" && typeExpr == "int");
        if (typeArg && *typeArg != typeExpr && !isIntBool) {
            string msg = "Not same type. First type: " + *typeArg + " and second type: " + typeExpr;
            throw invalid_argument(msg);
        }
        if (isIntBool) typeExpr = "bool";
        ty = typeExpr;
        retType = ctx.convertToLLVMType(typeExpr);
    
    } else if (!typeArg && !value) {
        throw invalid_argument("Cannot declare auto with no assigment.");
    }
    else {
        // we have a type defined, but no value; get from default value
        ty = *typeArg;
        retType = ctx.convertToLLVMType(ty);
        auto res = ctx.getDefaultValue(ty);
        if (!res) { // if its not one of the primitive types, then it may be a class
            return make_unique<ClassVarDecl>(ty, name, move(params))->codegen(ctx);
        }
        val = *res;
    }

    AllocaInst *inst = ctx.builder->CreateAlloca(retType, 0, name.c_str());
    ctx.createVarName(name, VariableScope { ty, inst, "" });
    
    auto s = ctx.builder->CreateStore(val, inst);
    // s->setVolatile(true);
    return s;
};  


optional<Value*> AssignExpr::codegen (CompilationContext &ctx) {
    auto result = ctx.findVarName(varName);
   
    Value* vlu = value == nullptr ? llvmValue : *(value->codegen(ctx));
    
    if (const VariableScope* v = get_if<VariableScope>(&result))
        return ctx.builder->CreateStore(vlu, v->value);

    if (const ClassScope* classSc = get_if<ClassScope>(&result)) {
        // search through the class scope if we can get the var name
        for (int i = 0; i < classSc->variables.size(); i++) {
            if (classSc->variables[i].expr->name == varName && ctx.runningClass != "") // check for public/private later
                return ctx.builder->CreateStore(vlu, classSc->variableValues[i]);
        }
        throw invalid_argument("Unable to find variable in class scope!");
    }

    throw invalid_argument("Reached invalid subroutine!");
}
