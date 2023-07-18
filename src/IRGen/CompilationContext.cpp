#include "AST.hpp"
#include "llvm/Bitcode/BitcodeWriter.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Transforms/Scalar/InstSimplifyPass.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include <cmath>
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Analysis/InstructionSimplify.h"
#include "llvm/IR/LegacyPassManager.h"

Value* CompilationContext::thisValue = nullptr;
string CompilationContext::runningClass = "";
bool CompilationContext::createToGlobal = false;

CompilationContext::CompilationContext() {
    context = std::make_unique<LLVMContext>();
    context->setOpaquePointers(false); // really helpful for debugging purposes
    mod = std::make_unique<Module>("mod", *context);
    builder = std::make_unique<IRBuilder<>>(*context);
    pushFrame(); // add main frame
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

// return type
llvm::Type* CompilationContext::convertToLLVMType (optional<string> type) {
    if (!type) return Type::getVoidTy(*context);
    
    // basic check
    auto result = *type == "int" ? Type::getInt32Ty(*context)
        : *type == "float" ? Type::getFloatTy(*context)
        : *type == "double" ? Type::getDoubleTy(*context)
        : *type == "string" ? Type::getInt8PtrTy(*context)
        : *type == "bool" ? Type::getInt1Ty(*context)
        : Type::getVoidTy(*context);

    // advanced check
    if (result->getTypeID() == llvm::Type::TypeID::VoidTyID) {
        try {
            auto r = this->findClass(*type);
            return r.type;
        } catch (invalid_argument e) {};


        if (type->substr(0, 3) == "pt:") { // is class type parameter
            // get actual class name
            auto classN = type->substr(3, type->length());
            auto r = this->findClass(classN); // assert that class actually has been found;
            return r.pointerType;
        }
    }

    return result;
}

// get default value
optional<llvm::Value*> CompilationContext::getDefaultValue (string type) {
    return  type == "int" ? IntExpr(0).codegen(*this) :
            type == "float" ? FloatExpr(0).codegen(*this) :
            type == "string" ? StringExpr("").codegen(*this) : 
            type == "bool" ? IntExpr(0, 1).codegen(*this) :
            nullopt;
}
