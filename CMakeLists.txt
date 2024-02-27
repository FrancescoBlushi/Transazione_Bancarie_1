cmake_minimum_required(VERSION 3.23)
project(Transazione_Bancarie)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(test)

add_executable(Transazione_Bancarie main.cpp)
set(SOURCE_FILE Client.cpp Client.h)
add_library(core ${SOURCE_FILE})
target_link_libraries(Transazione_Bancarie core)
