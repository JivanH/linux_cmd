cmake_minimum_required(VERSION 3.16)

#set the project name
project(grep)

#add the executable
add_executable(grep grep.c)

install(TARGETS grep DESTINATION "${CMAKE_BINARY_DIR}/bin")
