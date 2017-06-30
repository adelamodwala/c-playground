cmake_minimum_required(VERSION 3.7)
project(simple_circular_queue)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        queue.c main.c)

add_executable(simple_circular_queue ${SOURCE_FILES})