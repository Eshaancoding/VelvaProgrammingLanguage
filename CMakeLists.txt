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

add_executable(${COMPILER_NAME} ${lib_srcs})
target_compile_options(${COMPILER_NAME} PUBLIC "-g")
target_include_directories(${COMPILER_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${LLVM_INCLUDE_DIRS} $ENV{TREE_SITTER_LIB_INCLUDE})
target_link_libraries(${COMPILER_NAME} PUBLIC ${llvm_libraries} ${targets} $ENV{TREE_SITTER_LIB_FILE})
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) # we are using C++17

################################### SET TESTS #####################################
include(CTest)

add_test(
  NAME FunctionTest
  COMMAND ./veld ../tests/FunctionTest.vld ctest
)
set_property(TEST FunctionTest PROPERTY PASS_REGULAR_EXPRESSION "^9")

add_test(
  NAME ForLoop
  COMMAND ./veld ../tests/ForLoop.vld ctest
)
set_property(TEST ForLoop PROPERTY PASS_REGULAR_EXPRESSION "^ABCDEFGHIJKLMNOPQRSTUVWXYZ\nabcdefghijklmnopqrstuvwxyz")

add_test(
  NAME AutoKeyword
  COMMAND ./veld ../tests/Auto.vld ctest
)
set_property(TEST AutoKeyword PROPERTY PASS_REGULAR_EXPRESSION "^3")

add_test(
  NAME Strings
  COMMAND ./veld ../tests/Strings.vld ctest
)
set_property(TEST Strings PROPERTY PASS_REGULAR_EXPRESSION "^hello world")

add_test(
  NAME IfStatement
  COMMAND ./veld ../tests/IfStatements.vld ctest
)
set_property(TEST IfStatement PROPERTY PASS_REGULAR_EXPRESSION "^2")