cmake_minimum_required(VERSION 3.5.2)
project(libcolormath)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)
file(GLOB SOURCES "src/*.c")

add_library(colormath SHARED ${SOURCES})
 
