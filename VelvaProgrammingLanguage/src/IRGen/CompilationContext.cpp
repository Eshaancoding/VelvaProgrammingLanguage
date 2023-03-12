#include "AST.hpp"
#include "llvm/Bitcode/BitcodeWriter.h"


CompilationContext::CompilationContext() {
    context = std::make_unique<LLVMContext>();
    mod = std::make_unique<Module>("mod", *context);
    builder = std::make_unique<IRBuilder<>>(*context);

    // fpm = make_unique<FunctionPassManager>(mod.get());
    // fpm->add(createInstructionCombiningPass());
    // fpm->add(createReassociatePass());
    // fpm->add(createGVNPass());
    // fpm->add(createCFGSimplificationPass());
    // fpm->doInitialization();
}

// void CompilationContext::compile() {
//     LoopAnalysisManager LAM;
//     FunctionAnalysisManager FAM;
//     CGSCCAnalysisManager CGAM;
//     ModuleAnalysisManager MAM;

//     // Create the new pass manager builder.
//     // Take a look at the PassBuilder constructor parameters for more
//     // customization, e.g. specifying a TargetMachine or various debugging
//     // options.
//     PassBuilder PB;

//     // Register all the basic analyses with the managers.
//     PB.registerModuleAnalyses(MAM);
//     PB.registerCGSCCAnalyses(CGAM);
//     PB.registerFunctionAnalyses(FAM);
//     PB.registerLoopAnalyses(LAM);
//     PB.crossRegisterProxies(LAM, FAM, CGAM, MAM);

//     // Create the pass manager.
//     // This one corresponds to a typical -O2 optimization pipeline.
//     ModulePassManager MPM = PB.buildPerModuleDefaultPipeline(OptimizationLevel::O0);

//     // Optimize the IR!
//     MPM.run(*mod, MAM);

// }
void CompilationContext::compile() {
    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();
    
    auto targetTriple = sys::getDefaultTargetTriple();

    string error;
    auto target = TargetRegistry::lookupTarget(targetTriple, error);
    assert(target);

    auto cpu = "generic";
    auto features = "";
    TargetOptions opt;
    auto rm = Optional<Reloc::Model>();
    auto targetMachine = target->createTargetMachine(targetTriple, cpu, features, opt, rm);

    mod->setDataLayout(targetMachine->createDataLayout());
    mod->setTargetTriple(targetTriple);

    auto filename = "output.o";
    error_code ec;
    raw_fd_ostream dest(filename, ec, sys::fs::OF_None);
    if (ec) {
        cerr << "Could not open file: " << ec.message();
        throw 1;
    }
    legacy::PassManager pass;
    auto fileType = CGFT_ObjectFile;
    if(auto ret = targetMachine->addPassesToEmitFile(pass, dest, nullptr, fileType)) {
        errs() << "The TargetMachine cannot emit a file of this type";
    };
    
    pass.run(*mod);
    dest.flush();
    delete targetMachine;
}

// ModulePassManager CompilationContext::setOptimize(ModuleAnalysisManager &MAM) {
    
// }

// void CompilationContext::defaultOptimize() {
//     PassBuilder PB;
//     this->mpm = 
// }