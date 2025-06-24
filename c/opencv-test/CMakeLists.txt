cmake_minimum_required(VERSION 3.20)

project(opencv-test)

set(CMAKE_CXX_STANDARD 23)

add_executable(main main.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/lena.png DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

find_package(OpenCV 4 REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
target_link_libraries( main ${OpenCV_LIBS} )
