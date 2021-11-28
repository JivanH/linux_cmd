cmake_minimum_required(VERSION 3.16)

#set the project name
project(mv)

#add the executable
add_executable(mv mv.c)

install(TARGETS mv DESTINATION "${CMAKE_BINARY_DIR}/bin")
