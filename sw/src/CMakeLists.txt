cmake_minimum_required(VERSION 3.19)

project(foo LANGUAGES CXX)

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME}
    PRIVATE
    main.cpp
)
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
    include
)
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
)
