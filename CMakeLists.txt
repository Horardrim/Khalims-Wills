cmake_minimum_required(VERSION 3.16)
project(KHalims-WILL LANGUAGES CXX)

include(CTest)
enable_testing()

# C++17 + 统一输出
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(ENABLE_COVERAGE "Enable gcov/lcov coverage" OFF)

option(ENABLE_ASAN "Enable AddressSanitizer" OFF)

# 编译选项
add_compile_options(-Wall -Wextra)

if(ENABLE_COVERAGE)
    add_compile_options(-g -O0 --coverage)
endif()

if(ENABLE_ASAN)
    add_compile_options(-fsanitize=address)
endif()

# 1. 收集所有源文件（递归）
file(GLOB_RECURSE SOURCES
     CONFIGURE_DEPENDS        # 让 cmake --build 时自动检测新增文件
     src/*/*.cxx
     src/*/*.c)

file(GLOB_RECURSE TEST_SOURCES
     CONFIGURE_DEPENDS        # 让 cmake --build 时自动检测新增文件
     test/*/*.cxx
     test/*/*.c)

# 2. 头文件搜索路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# 3. binary和test binary
add_executable(khalims-will src/main.cxx ${SOURCES})
add_executable(khalims-will.test test/main.cxx ${SOURCES} ${TEST_SOURCES})

add_test(NAME khalims_test COMMAND khalims-will.test)

set_tests_properties(khalims_test PROPERTIES
    FAIL_REGULAR_EXPRESSION "ERROR: AddressSanitizer"
)

if(ENABLE_COVERAGE)
    target_link_options(khalims-will.test PRIVATE --coverage)
    target_link_options(khalims-will PRIVATE --coverage)
endif()

if(ENABLE_ASAN)
    target_link_options(khalims-will.test PRIVATE -fsanitize=address)
    target_link_options(khalims-will PRIVATE -fsanitize=address)
endif()
