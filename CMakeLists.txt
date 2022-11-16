cmake_minimum_required(VERSION 3.13.4)
project(Vilvataki)

find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_MODULES_PATH

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(vilvatakic main.cpp)
set_property(TARGET vilvatakic PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libs engine scalaropts)

target_link_libraries(vilvatakic ${llvm_libs})
