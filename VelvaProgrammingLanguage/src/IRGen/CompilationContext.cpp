#include "AST.hpp"
#include "llvm/Bitcode/BitcodeWriter.h"


CompilationContext::CompilationContext(bool compileToObject) {
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
    
    auto filename = "output.bc";
    error_code ec;
    raw_fd_ostream dest(filename, ec, sys::fs::OF_None);
    if (ec) {
        cerr << "Could not open file: " << ec.message();
        throw 1;
    }
    WriteBitcodeToFile(*mod, dest);
}

ModulePassManager CompilationContext::setOptimize(ModuleAnalysisManager &MAM) {
    
}

// void CompilationContext::defaultOptimize() {
//     PassBuilder PB;
//     this->mpm = 
// }