cmake_minimum_required(VERSION 3.16)

#set the project name
project(rm)

#add the executable
add_executable(rm rm.c)

install(TARGETS rm DESTINATION "${CMAKE_BINARY_DIR}/bin")
