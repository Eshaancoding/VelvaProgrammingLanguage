cmake_minimum_required(VERSION 3.13.4)
project(Velva)

# set names
set(COMPILER_NAME veld)
set(TEST_NAME testVelva)
set(LIB_NAME velva)

########################## MAKE THE LLVM LIBRARY ##########################

# Find package
find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_PREFIX_PATH
message(STATUS "Found LLVM Package")

# Assert that the version of LLVM is good
if (NOT ${LLVM_PACKAGE_VERSION} VERSION_GREATER_EQUAL "15.0.0")
  message(FATAL_ERROR "LLVM Package Requires version > 15.0.0!")
endif()

# For generating targets that will be used to link the libraries
foreach(target ${LLVM_TARGETS_TO_BUILD})
  list(APPEND targets "LLVM${target}CodeGen")
endforeach()

# find lib names
set(LLVM_LINK_COMPONENTS aarch64asmparser armasmparser avrasmparser bpfasmparser mipsasmparser msp430asmparser powerpcasmparser riscvasmparser sparcasmparser systemzasmparser veasmparser webassemblyasmparser x86asmparser amdgpuasmparser asmparser analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)

# get lib name
llvm_map_components_to_libnames(llvm_libraries ${LLVM_LINK_COMPONENTS})

########################## MAKE THE VELVA LIBRARY ##########################

set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE 
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${LLVM_INCLUDE_DIRS}
  $ENV{TREE_SITTER_LIB_INCLUDE}
)

add_library(${LIB_NAME} STATIC 
  ${SRC}/TreeSitterParser/MainParser.cpp
  ${SRC}/TreeSitterParser/ParseBlock.cpp
  ${SRC}/TreeSitterParser/ParseExpression.cpp
  ${SRC}/TreeSitterParser/ParseFunctionDeclare.cpp
  ${SRC}/TreeSitterParser/ParseIfStatement.cpp
  ${SRC}/TreeSitterParser/ParseLoop.cpp
  ${SRC}/TreeSitterParser/ParserInit.cpp
  ${SRC}/TreeSitterParser/TreeSitterCursor.cpp
  ${SRC}/TreeSitterParser/VariableDecl.cpp
  ${SRC}/AST/ASTDebug.cpp
  ${SRC}/AST/ASTReturnType.cpp
  ${SRC}/AST/BlockExpr.cpp
  ${SRC}/AST/Functions.cpp
  ${SRC}/AST/Utils.cpp
  ${SRC}/IRGen/BinaryOpIRGen.cpp
  ${SRC}/IRGen/BlockIrGen.cpp
  ${SRC}/IRGen/CompilationContext.cpp
  ${SRC}/IRGen/LoopIrGen.cpp
  ${SRC}/IRGen/TreeSitterIRGen.cpp
  ${SRC}/IRGen/VariableIrGen.cpp
  $ENV{TREE_SITTER_PARSER_FILE} 
)

target_include_directories(${LIB_NAME} PUBLIC ${INCLUDE})

target_link_libraries(${LIB_NAME} PUBLIC 
  ${llvm_libraries}             # Libraries from llvm
  ${targets}                    # Targets from llvm 
  $ENV{TREE_SITTER_LIB_FILE}    # parser.c from tree sitter
)

set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 17) # we are using C++17


########################## RUN TEST CPP WITH LIBRARY ##########################

add_executable(${TEST_NAME} ../src/Driver/TestVLD.cpp)
target_include_directories(${TEST_NAME} PUBLIC ${INCLUDE})
target_link_libraries(${TEST_NAME} PUBLIC ${LIB_NAME})
set_property(TARGET ${TEST_NAME} PROPERTY CXX_STANDARD 17) # we are using C++17

########################## RUN COMPILER CPP WITH LIBRARY ##########################

add_executable(${COMPILER_NAME} ../src/Driver/TSDriver.cpp)
target_include_directories(${COMPILER_NAME} PUBLIC ${INCLUDE})
target_link_libraries(${COMPILER_NAME} PUBLIC ${LIB_NAME})
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) # we are using C++17