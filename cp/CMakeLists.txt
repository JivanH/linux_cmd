cmake_minimum_required(VERSION 3.16)

#set the project name
project(cp)

#add the executable
add_executable(cp cp.c)

install(TARGETS cp DESTINATION "${CMAKE_BINARY_DIR}/bin")
