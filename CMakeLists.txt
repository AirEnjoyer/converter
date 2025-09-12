cmake_minimum_required(VERSION 3.10)

project(Converter)

add_executable(Converter main.c)

target_link_libraries(Converter m)
