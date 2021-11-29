cmake_minimum_required(VERSION 3.10)
project(grep)
add_executable(grep grep.c)
install(TARGETS grep DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")

