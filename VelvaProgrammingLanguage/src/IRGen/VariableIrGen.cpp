#include "AST.hpp"


CompilationContext::CompilationContext(bool compileToObject) {
    context = std::make_unique<LLVMContext>();
    mod = std::make_unique<Module>("mod", *context);
    builder = std::make_unique<IRBuilder<>>(*context);
    mpm = std::make_unique<ModulePassManager>();
}

void CompilationContext::compile() {
    auto targetTriple = sys::getDefaultTargetTriple();
    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();
    string error;
    auto target = TargetRegistry::lookupTarget(targetTriple, error);
    assert(target);
    auto cpu = "generic";
    auto features = "";

    // initialize analysis manager
    ModuleAnalysisManager MAM;

    TargetOptions out;
    auto rm = Optional<Reloc::Model>();
    auto targetMachine = target->createTargetMachine(targetTriple, cpu, features, out, rm);

    mod->setDataLayout(targetMachine->createDataLayout());
    mod->setTargetTriple(targetTriple);

    auto filename = "output.o";
    error_code ec;
    raw_fd_ostream dest(filename, ec, sys::fs::OF_None);
    auto fileType = CGFT_ObjectFile;

    if(ec) {
        cerr<<"Could not write to file";
    }

    this->mpm->run(*mod, MAM);
    dest.flush();
}

void CompilationContext::setOptimize() {
    // setting up optimization passes
    FunctionPassManager fpm;

    // adding passes, more will be added later
    fpm.addPass(InstSimplifyPass()); 
    fpm.addPass(GVNPass());
    fpm.addPass(SimplifyCFGPass());

    // add the function pass manager to the module pass manager
    mpm->addPass(createModuleToFunctionPassAdaptor(move(fpm)));
}

// void CompilationContext::defaultOptimize() {
//     PassBuilder PB;
//     this->mpm = 
// }

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

// optional<Value *> StringExpr::codegen(CompilationContext &ctx)
// {
//     auto i8 = IntegerType::get(*ctx.context, 8);
//     vector<Constant*> chars(text.size());
//     for(int i = 0; i < text.size(); ++i) {
//         chars[i] = ConstantInt::get(i8, text[i]);
//     }
//     chars.push_back(ConstantInt::get(i8, 0));

//     auto stringType = ArrayType::get(i8, chars.size());

//     auto globalDecl = (GlobalVariable*) ctx.mod->getOrInsertGlobal(".str" + to_string(StringExpr::STR_TOTAL), stringType);
//     globalDecl->setInitializer(ConstantArray::get(stringType, chars));
//     globalDecl->setConstant(true);
//     globalDecl->setLinkage(GlobalValue::LinkageTypes::PrivateLinkage);
//     globalDecl->setUnnamedAddr(GlobalValue::UnnamedAddr::Global);

//     return ConstantExpr::getBitCast(v, i8->getPointerTo());
// }
optional<Value *> StringExpr::codegen(CompilationContext &ctx) {
    return nullopt; // the original function has bugs :/

    // plus, string might be a little bit weird to implement. For example, we might have to redeclare/declare our string
    // See here: https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/appendix-a-how-to-implement-a-string-type-in-llvm/index.html?highlight=string#how-to-implement-a-string-type-in-llvm

    // also, why are you setting initializerconstant linkage? Is that mandatory
    // Plus parser doesn't implement string anyway :shrug:
}

optional<Function *> DeclareFunctionExpr::codegen(CompilationContext &ctx)
{
    // TODO: Later we have to check if the function has already been declared or not, and check if it has an empty body (if not, we give error)

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

    auto retType = returnType == "int" ? Type::getInt32Ty(*ctx.context)
            : returnType == "double" ? Type::getDoubleTy(*ctx.context)
            : returnType == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getVoidTy(*ctx.context);

    FunctionType *FT = FunctionType::get(retType, paramTypes, false);

    Function *F = Function::Create(FT, Function::ExternalLinkage, name, ctx.mod.get());

    unsigned Idx = 0;
    for (auto &Arg : F->args())
    {
        Arg.setName(get<1>(params[Idx]));
        Idx++;
    }
    BasicBlock *bb = BasicBlock::Create(*ctx.context, name, F);
    ctx.builder->SetInsertPoint(bb);
    
    // ctx.namedValues.clear() ; // Functions need to be declared before any vars ; we should prob do a scoping thing in the future
    // for(auto &arg : F->args()) {
    //     ctx.namedValues[arg.getName().str()] = &arg;
    // }

    // codegen through all expressions
    
    for (auto &expr: body) { 
        auto v = expr->codegen(ctx); 
        
    }

    // if we do not return anything, then we just return nothing. However if we do return, then we have the return statement handle that (parsed by runner and created by AST)
    if (!returnType)
        ctx.builder->CreateRet(UndefValue::get(Type::getVoidTy(*ctx.context)));

    verifyFunction(*F);

    return F;
}

optional<Value *> VarUseExpr::codegen(CompilationContext &ctx)
{
    auto v = ctx.namedValues[var];
    return ctx.builder->CreateLoad(v->getType(), v, var.c_str());
}

// error stuff literally just dummy functions because it has to override shit
optional<Value*> VarDeclareExpr::codegen (CompilationContext &ctx) {
    AllocaInst *inst = ctx.builder->CreateAlloca(/*type == "int" ? Type::getInt32Ty(*ctx.context)
            : type == "double" ? Type::getDoubleTy(*ctx.context)
            : type == "string" ? Type::getInt8PtrTy(*ctx.context)
            : Type::getInt32Ty(*ctx.context)*/ Type::getInt32Ty(*ctx.context),
            0,
            name.c_str());
    ctx.namedValues[name] = inst;
    auto rhs = value->codegen(ctx);
    if (!rhs)
        return {};
    return ctx.builder->CreateStore(*rhs, inst);
};  

optional<Value*> AssignExpr::codegen (CompilationContext &ctx) {
    return ctx.builder->CreateStore(*(value->codegen(ctx)), ctx.namedValues[varName]);
}

optional<Value*> Expr::codegen (CompilationContext &ctx) {
    return nullopt;
}