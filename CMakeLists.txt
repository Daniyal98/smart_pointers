cmake_minimum_required(VERSION 3.12)
project(smart_pointers)

set (CMAKE_CXX_STANDARD 17)

include_directories("include")
file(GLOB SOURCES "src/*.cpp")
add_executable(smart_pointers ${SOURCES})

target_link_libraries( smart_pointers ${CURSES_LIBRARIES} )