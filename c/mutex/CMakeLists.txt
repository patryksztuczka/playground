cmake_minimum_required(VERSION 3.20)

project(mutex)

set(CMAKE_CXX_STANDARD 23)

find_package(Threads REQUIRED)
add_executable(mutex main.cpp)
target_link_libraries(mutex PRIVATE Threads::Threads)
