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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsanitize=address")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


# Check if both files exist
if (NOT EXISTS "../cmake_pre.bash") 
	message (FATAL_ERROR "Requires ../cmake_pre.bash file")
endif()

# Run bash file to set CMAKE_PREFIX_PATH
execute_process (
    COMMAND bash ../cmake_pre.bash
)
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
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
message(STATUS "LLVM include dirs: ${LLVM_INCLUDE_DIRS}")

#In the future we can prob create a bash script to look through the dir automatically
add_executable(${COMPILER_NAME} ${VELVA_FILE_PATH}) 
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future

message(STATUS ${LLVM_TARGETS_TO_BUILD})
foreach(target ${LLVM_TARGETS_TO_BUILD})
  list(APPEND targets "LLVM${target}CodeGen")
endforeach()
message(STATUS ${targets})
# add_executable(TestInstantiator ../src/Driver/compiler.cpp)
# idk what libraries to link
# add_test(NAME TestInstantiator
#             COMMAND TestInstantiator) // we are adding tests later okay
include_directories(${LLVM_INCLUDE_DIRS} include)
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libraries asmparser ${LLVM_LINK_COMPONENTS}  analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)
#llvm_map_components_to_libnames(llvm_libraries all)
#asmparser analysis support core object irreader executionengine scalaropts instcombine orcjit runtimedyld interpreter mc nativecodegen)

message(STATUS "llvm libs: ${llvm_libraries}")
message(STATUS "targets: ${targets}")

target_link_libraries(${COMPILER_NAME} ${llvm_libraries} ${targets})

# enable_testing()
# add_test()