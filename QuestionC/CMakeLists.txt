cmake_minimum_required(VERSION 3.10)
project(QuestionC)

set(CMAKE_CXX_STANDARD 17)

add_executable(QuestionC main.cpp LRUCache.cpp LRUCache.h Server.cpp Server.h)