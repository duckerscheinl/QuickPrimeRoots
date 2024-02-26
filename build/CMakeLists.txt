cmake_minimum_required(VERSION 3.22)
project(QuickPrimeRoots)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -pg)

add_executable(${PROJECT_NAME}
        ../src/main.cpp
        ../src/FindPrimeRoots.cpp
        ../src/FindPrimeRoots.h
        ../src/FirstIntRoots.h
        ../src/FirstIntRoots.cpp
        ../src/IntRootsWSqrt.h
        ../src/IntRootsWSqrt.cpp)

set(IRF_LIB IterativeRootFinders)
target_link_libraries(${PROJECT_NAME} ${IRF_LIB})
add_subdirectory(../src ../src/build)