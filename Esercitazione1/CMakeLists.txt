cmake_minimum_required(VERSION 3.20)

project(primoprogetto)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(SOURCES temp.cpp programma.cpp)

add_executable(programma programma.cpp)
add_executable(temp temp.cpp)