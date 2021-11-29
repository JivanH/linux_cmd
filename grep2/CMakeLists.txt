cmake_minimum_required(VERSION 3.10)
project(grep2)
add_executable(grep2 grep2.c)
install(TARGETS grep2 DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin" )

