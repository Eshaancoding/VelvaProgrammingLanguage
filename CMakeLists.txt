cmake_minimum_required(VERSION 3.13.4)
project(Velva)

# get all file names
file(GLOB_RECURSE lib_srcs ${CMAKE_SOURCE_DIR}/src/*.cpp ${CMAKE_SOURCE_DIR}/src/TreeSitter/*.c)

# set names
set(COMPILER_NAME veld)
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

########################## RUN COMPILER CPP WITH LIBRARY ##########################

set(CMAKE_CXX_FLAGS "-g -fstandalone-debug")
add_executable(${COMPILER_NAME} ${lib_srcs})
target_compile_options(${COMPILER_NAME} PUBLIC)
target_include_directories(${COMPILER_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${LLVM_INCLUDE_DIRS} $ENV{TREE_SITTER_LIB_INCLUDE})
target_link_libraries(${COMPILER_NAME} PUBLIC ${llvm_libraries} ${targets} $ENV{TREE_SITTER_LIB_FILE})
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) # we are using C++17

################################### SET TESTS #####################################

# first word before space is the name of test in path
# everything after is the expected result of the test
set(TestList 
  "FunctionTest 9"
  "ForLoop ABCDEFGHIJKLMNOPQRSTUVWXYZ\nabcdefghijklmnopqrstuvwxyz"
  "WhileLoop ABCDEFGHIJKLMNOPQRSTUVWXYZ\nabcdefghijklmnopqrstuvwxyz"
  "Auto 363"
  "IfStatements 2"
  "Assign 1"
  "Ternary 4"
  "MultipleConditions 315"
  "Boolean 1110"
  "Scoping 76<"
  "Class 30642253"
  "ClassExtra 303520"
)

include(CTest)
foreach (X IN LISTS TestList) 
  separate_arguments(X) 
  list(POP_FRONT X NameTest)
  string(REPLACE ";" " " ExpectedResult "${X}")
  add_test(
    NAME ${NameTest}
    COMMAND ./veld ../tests/${NameTest}.vld
  )
  set_property(TEST ${NameTest} PROPERTY PASS_REGULAR_EXPRESSION "^${ExpectedResult}")
endforeach()
