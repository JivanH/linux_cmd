cmake_minimum_required(VERSION 3.16)

#set the project name
project(cd)

#add the executable
add_executable(cd cd.c)

install(TARGETS cd DESTINATION "${CMAKE_BINARY_DIR}/bin")
