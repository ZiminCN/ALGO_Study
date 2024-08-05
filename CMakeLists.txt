# cmake 最低版本需求
cmake_minimum_required(VERSION 3.20)

# 工程名称
project(algo_cpp_study)

# 设置
set(CMAKE_CXX_STANDARD 11)

include_directories(inc/)

# 编译源码生成目标
add_executable(algo_cpp_study src/main.cpp
        src/sort.cpp
        src/linked_list.cpp)