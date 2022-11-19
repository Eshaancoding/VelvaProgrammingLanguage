cmake_minimum_required(VERSION 3.13.4)
project(Velva)

find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_MODULES_PATH

# GIVE ME EDIT ACCESS FOR TERMINAL no problem :)
# it should be done
set(COMPILER_NAME "veld")

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Apparently we have to manually list out every cpp file that we want to compile. Although it is simple for now, I think it's bad code design if we manually list out every single cpp file in the src folder because it would be way too complex
# So maybe we need another CmakeLists under the src/ folder, and let this main Cmake call that CmakeList 
# and then repeat that for every subdirectory if we need to. This was done in LLVM's directory
# Idk maybe we could do this or something different. Not sure
add_executable(${COMPILER_NAME} src/Driver/compiler.cpp src/Lexer/Lexer.cpp src/Lexer/Token.cpp) 
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future

message(STATUS "LLVM include dirs: ${LLVM_INCLUDE_DIRS}")

include_directories(${LLVM_INCLUDE_DIRS} include)
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libs support core irreader)

target_link_libraries(${COMPILER_NAME} ${llvm_libs})