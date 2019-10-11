cmake_minimum_required(VERSION 3.15)
project(Chain_Chunk)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Chain_Chunk
        chunkList.h
        main.cpp
        test.txt)
