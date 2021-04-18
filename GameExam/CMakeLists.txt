cmake_minimum_required(VERSION 3.10)
project(exam)

set(CMAKE_CXX_STANDARD 11)

add_executable(exam main.cpp Professor.cpp Professors.cpp Student.cpp Factory.cpp Factories.cpp)