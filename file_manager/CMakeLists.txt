cmake_minimum_required(VERSION 3.16)

#set the project name
project(file_manager)

#add the executable
add_executable(file_manager file_manager.c)

install(TARGETS file_manager DESTINATION "${CMAKE_BINARY_DIR}/bin")
