cmake_minimum_required(VERSION 3.28)
project(for_interview)

set(CMAKE_CXX_STANDARD 23)

add_executable(for_interview main.cpp
        Unit.cpp
        Unit.h
        types.h
        BehaviourFly.cpp
        BehaviourFly.h
        BehaviourMove.cpp
        BehaviourMove.h)
