cmake_minimum_required(VERSION 3.13.4)
project(Velva)

# Linker LLVM components
set(LLVM_LINK_COMPONENTS
  aarch64asmparser
  armasmparser
  avrasmparser
  bpfasmparser
  mipsasmparser
  msp430asmparser
  powerpcasmparser
  riscvasmparser
  sparcasmparser
  systemzasmparser
  veasmparser
  webassemblyasmparser
  x86asmparser
  amdgpuasmparser
)

# For cmake flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wreturn-type") # return type errs are annoying
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -Wreturn-type")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


# Check if both files exist
if (NOT EXISTS "../cmake_pre.sh") 
	message (FATAL_ERROR "Requires ../cmake_pre.sh file")
endif()

# Run bash file to set CMAKE_PREFIX_PATH
execute_process (
    COMMAND bash ../cmake_pre.sh
    OUTPUT FAKE_PREFIX_PATH
)
list(APPEND CMAKE_PREFIX_PATH FAKE_PREFIX_PATH)

message(STATUS "Prefix path: $ENV{CMAKE_PREFIX_PATH}")
execute_process (
    COMMAND bash ../list_files.sh
    OUTPUT_VARIABLE VELVA_FILE_PATH
)

message (STATUS "File path: ${VELVA_FILE_PATH}")
find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_PREFIX_PATH

set(COMPILER_NAME "veld")
set(TEST_NAME "testvld")

if (NOT ${LLVM_PACKAGE_VERSION} VERSION_GREATER_EQUAL "15.0.0")
    message(FATAL_ERROR "LLVM Package Requires version > 15.0.0!")
endif()

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")

#In the future we can prob create a bash script to look through the dir automatically
include(CTest)
add_executable(${COMPILER_NAME} ${VELVA_FILE_PATH} $ENV{TREE_SITTER_PARSER_FILE} ../src/Driver/TSDriver.cpp) 
add_executable(${TEST_NAME} ${VELVA_FILE_PATH} $ENV{TREE_SITTER_PARSER_FILE} ../tests/TestVLD.cpp)
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future
set_property(TARGET ${TEST_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future
add_test(vtf ${TEST_NAME})

foreach(target ${LLVM_TARGETS_TO_BUILD})
  list(APPEND targets "LLVM${target}CodeGen")
endforeach()

include_directories(${LLVM_INCLUDE_DIRS} $ENV{TREE_SITTER_LIB_INCLUDE} $ENV{TREE_SITTER_PARSER_INCLUDE} include)
#target_include_directories(${TEST_NAME} PRIVATE ${LLVM_INCLUDE_DIRS} $ENV{TREE_SITTER_LIB_INCLUDE} $ENV{TREE_SITTER_PARSER_INCLUDE} include)
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()

# add_definitions(${LLVM_DEFINITIONS_LIST}, -fstandalone-debug)
target_compile_definitions(${COMPILER_NAME} PUBLIC ${LLVM_DEFINITIONS_LIST})
target_compile_definitions(${TEST_NAME} PUBLIC ${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libraries asmparser ${LLVM_LINK_COMPONENTS}  analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)
#llvm_map_components_to_libnames(llvm_libraries all)
#asmparser analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)

# message(STATUS "llvm libs: ${llvm_libraries}")
# message(STATUS "targets: ${targets}")

message(STATUS "Tree sietter lib: $ENV{TREE_SITTER_LIB_FILE}")

add_library(treesitter SHARED IMPORTED)
set_target_properties(treesitter PROPERTIES IMPORTED_LOCATION $ENV{TREE_SITTER_LIB_FILE})

target_link_libraries(${COMPILER_NAME} ${llvm_libraries} ${targets} $ENV{TREE_SITTER_LIB_FILE} treesitter)
target_link_libraries(${TEST_NAME} ${llvm_libraries} ${targets} $ENV{TREE_SITTER_LIB_FILE} treesitter)