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

optional<Value *> PointerExpr::codegen (CompilationContext &ctx) {
    const auto result = ctx.findVarName(name); // find the original declaration of the variable itself
    
    if (const VariableScope* v = get_if<VariableScope>(&result)) { 
        retType = v->type;
        return v->value;
    }
    else if (const ClassScope* classSc = get_if<ClassScope>(&result)) {
        // search through the class scope if we can get the var name
        for (int i = 0; i < classSc->variables.size(); i++) {
            if (classSc->variables[i].expr->name == name && ctx.runningClass != "") {
                retType = classSc->variables[i].expr->return_type();
                return classSc->variableValues[i];
            }
        }
    }
    
    throw invalid_argument("No variable found.");
}

optional<Value*> AccessorExpr::codegen (CompilationContext &ctx) {
    auto val = *expr->codegen(ctx);
    auto rt = expr->return_type();
    
    string t = rt.substr(4, rt.size()-5);
    
    Value* gepS = ctx.builder->CreateGEP(
        ctx.convertToLLVMType(t),
        val,
        {*v[0]->codegen(ctx)}
    );
    Value* loadVal = ctx.builder->CreateLoad(ctx.convertToLLVMType(t), gepS);

    for (int i = 1; i < v.size(); i++) {
        t = t.substr(4, t.size()-5);
        gepS = ctx.builder->CreateGEP(
            ctx.convertToLLVMType(t),
            loadVal,
            {*v[i]->codegen(ctx)}
        );
        loadVal = ctx.builder->CreateLoad(ctx.convertToLLVMType(t), gepS);
    }

    return loadVal;
}

optional<Value*> CharExpr::codegen (CompilationContext &ctx) {
    int x = (int)character;
    return IntExpr(x, 8).codegen(ctx);
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
    Value* vlu = llvmValue != nullptr ? llvmValue : *(value->codegen(ctx));
    Value* toAdd = nullptr;
    string toAddRet = "";
    
    if (const VariableScope* v = get_if<VariableScope>(&result)) {
        toAdd = v->value;
        toAddRet = v->type;
    }
        

    if (const ClassScope* classSc = get_if<ClassScope>(&result)) {
        // search through the class scope if we can get the var name
        for (int i = 0; i < classSc->variables.size(); i++) {
            if (classSc->variables[i].expr->name == varName && ctx.runningClass != "") {
                toAdd = classSc->variableValues[i];
                toAddRet = *classSc->variables[i].expr->typeArg;
                break;
            }
        }
    }

    if (toAdd == nullptr) throw invalid_argument("Unable to parse assignment.");

    // parse var to access specific addresses
    Value* gepS;
    Value* loadVel;
    for (int i = 0; i < v.size(); i++) {
        toAdd = ctx.builder->CreateLoad(
            ctx.convertToLLVMType(toAddRet),
            toAdd
        );

        toAddRet = toAddRet.substr(4, toAddRet.size()-5);

        toAdd = ctx.builder->CreateGEP(
            ctx.convertToLLVMType(toAddRet),
            toAdd,
            {*v[i]->codegen(ctx)}
        );
    }

    return ctx.builder->CreateStore(vlu, toAdd);

    throw invalid_argument("Reached invalid subroutine!");
}
