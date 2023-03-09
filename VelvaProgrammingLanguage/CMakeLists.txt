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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsanitize=memory")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fsanitize=memory")
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
# Find path
find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_PREFIX_PATH

set(COMPILER_NAME "veld")

if (NOT ${LLVM_PACKAGE_VERSION} VERSION_GREATER_EQUAL "15.0.0")
    message(FATAL_ERROR "LLVM Package Requires version > 15.0.0!")
endif()

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
# message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
# message(STATUS "LLVM include dirs: ${LLVM_INCLUDE_DIRS}")

#In the future we can prob create a bash script to look through the dir automatically
add_executable(${COMPILER_NAME} ${VELVA_FILE_PATH} $ENV{TREE_SITTER_PARSER_FILE}) 
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future

# message(STATUS ${LLVM_TARGETS_TO_BUILD})
foreach(target ${LLVM_TARGETS_TO_BUILD})
  list(APPEND targets "LLVM${target}CodeGen")
endforeach()
# message(STATUS ${targets})
# add_executable(TestInstantiator ../src/Driver/compiler.cpp)
# idk what libraries to link
# add_test(NAME TestInstantiator
#             COMMAND TestInstantiator) // we are adding tests later okay
include_directories(${LLVM_INCLUDE_DIRS} $ENV{TREE_SITTER_DIR}/lib/include $ENV{TREE_SITTER_PARSER_INCLUDE} include)
message(STATUS "Tree sitter include: $ENV{TREE_SITTER_DIR}/lib/include")
message(STATUS "Tree sitter parser file: $ENV{TREE_SITTER_PARSER_FILE}")
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
# message(STATUS "LLVM Def list: ${LLVM_DEFINITIONS_LIST}")

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()

# add_definitions(${LLVM_DEFINITIONS_LIST}, -fstandalone-debug)
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libraries asmparser ${LLVM_LINK_COMPONENTS}  analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)
#llvm_map_components_to_libnames(llvm_libraries all)
#asmparser analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)

# message(STATUS "llvm libs: ${llvm_libraries}")
# message(STATUS "targets: ${targets}")

message(STATUS "Tree sietter dir: $ENV{TREE_SITTER_DIR}/lib/libtree-sitter.a")

add_library(treesitter SHARED IMPORTED)

target_link_libraries(${COMPILER_NAME} ${llvm_libraries} ${targets} $ENV{TREE_SITTER_DIR}/lib/libtree-sitter.a)

# enable_testing()
# add_test()