make: 
	@clang++.exe .\TutorialCode.cpp -IC:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\llvm\include -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -LC:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib -Wl,-search_paths_first -Wl,-headerpad_max_install_names -lLLVM-15

test:
	@clang++.exe -std=c++17 .\TutorialCode.cpp -IC:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\llvm\include -IC:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\include -std=c++17   -fno-exceptions -fno-rtti -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -LIBPATH:C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMInterpreter.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMExecutionEngine.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMRuntimeDyld.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMOrcTargetProcess.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMOrcShared.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMCodeGen.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMTarget.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMScalarOpts.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMInstCombine.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMAggressiveInstCombine.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMObjCARCOpts.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMTransformUtils.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMBitWriter.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMAnalysis.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMProfileData.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMSymbolize.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMDebugInfoPDB.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMDebugInfoMSF.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMDebugInfoDWARF.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMObject.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMTextAPI.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMMCParser.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMIRReader.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMAsmParser.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMMC.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMDebugInfoCodeView.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMBitReader.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMCore.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMRemarks.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMBitstreamReader.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMBinaryFormat.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMSupport.lib C:\Users\eshaa\OneDrive\Desktop\Coding\LLVM\llvm-project\build\lib\LLVMDemangle.lib

clean: 
	@rm .\build\a.exe
