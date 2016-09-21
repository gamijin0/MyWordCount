cmake_minimum_required(VERSION 3.5)
project(MyWordCount)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c binTree.h binTree.c readFile.h readFile.c)
add_executable(WordCount ${SOURCE_FILES})