cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

set(SOURCES
    main.cpp
)

set(HEADERS
    header.h
)

add_executable(main ${SOURCES} ${HEADERS})

set_target_properties(
    main PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON   
)
