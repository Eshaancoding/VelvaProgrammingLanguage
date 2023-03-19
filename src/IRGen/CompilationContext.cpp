#include "AST.hpp"
#include "llvm/Bitcode/BitcodeWriter.h"


CompilationContext::CompilationContext() {
    context = std::make_unique<LLVMContext>();
    mod = std::make_unique<Module>("mod", *context);
    builder = std::make_unique<IRBuilder<>>(*context);
    lessVerbose = false;
}

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
    auto rm = Optional<Reloc::Model>(Reloc::PIC_);
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