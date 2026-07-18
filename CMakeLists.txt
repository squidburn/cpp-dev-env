cmake_minimum_required(VERSION 3.10)
project(my_cpp)

set(CMAKE_CXX_STANDARD 14)

# 自动收集 src 下所有 .cpp 文件
file(GLOB_RECURSE SOURCES "src/*.cpp")

include_directories(include)

add_executable(build_output ${SOURCES})
