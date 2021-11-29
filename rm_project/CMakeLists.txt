cmake_minimum_required(VERSION 3.10)
project(rm_project)
add_executable(rm_project rm.c)
install(TARGETS rm_project   DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")
