cmake_minimum_required(VERSION 3.22)
project(QuickPrimeRoots)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -pg)

add_executable(QPRs
        ../src/main.cpp
        ../src/FindPrimeRoots.cpp
        ../src/FindPrimeRoots.h
        ../src/FirstIntRoots.h
        ../src/FirstIntRoots.cpp
        ../src/IntRootsWSqrt.h
        ../src/IntRootsWSqrt.cpp)