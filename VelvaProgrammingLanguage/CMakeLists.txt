cmake_minimum_required(VERSION 3.13.4)
project(Velva)

# Run bash file to set CMAKE_PREFIX_PATH
execute_process (
    COMMAND bash ../cmake_pre.bash
)
message(STATUS "Prefix path: $ENV{CMAKE_PREFIX_PATH}")
execute_process (
    COMMAND bash ../list_files.sh
)

message (STATUS "File path: $ENV{VELVA_FILE_PATH}")
# Find path
find_package(LLVM REQUIRED CONFIG) #Make sure that LLVM is in your CMAKE_PREFIX_PATH

# Assert LLVM version

set(COMPILER_NAME "veld")

if (NOT ${LLVM_PACKAGE_VERSION} VERSION_GREATER_EQUAL "15.0.0")
    message(FATAL_ERROR "LLVM Package Requires version > 15.0.0!")
endif()

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
message(STATUS "LLVM include dirs: ${LLVM_INCLUDE_DIRS}")

#In the future we can prob create a bash script to look through the dir automatically
add_executable(${COMPILER_NAME} $ENV{VELVA_FILE_PATH}) 
set_property(TARGET ${COMPILER_NAME} PROPERTY CXX_STANDARD 17) #We can set this to 20 in the future

add_executable(TestInstantiator tests/TestMain.cpp)
# idk what libraries to link
add_test(NAME TestInstantiator
            COMMAND TestInstantiator)
include_directories(${LLVM_INCLUDE_DIRS} include)
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libs support core irreader)

target_link_libraries(${COMPILER_NAME} ${llvm_libs})