set(LIB_NAME IterativeRootFinders)
add_library(${LIB_NAME} AndersonBjorck.cpp)

target_include_directories(${LIB_NAME}
                            INTERFACE
                            ${CMAKE_CURRENT_SOURCE_DIR})