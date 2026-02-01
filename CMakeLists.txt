cmake_minimum_required(VERSION 3.16)
project(KHalims-WILL LANGUAGES CXX)

# C++17 + 统一输出
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 编译选项
add_compile_options(-Wall -Wextra)

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

option(ENABLE_COVERAGE "Enable gcov/lcov coverage" OFF)

if(ENABLE_COVERAGE)
    # 2. 强制 Debug + 覆盖率标志
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 --coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
endif()
