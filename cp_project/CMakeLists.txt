cmake_minimum_required(VERSION 3.10)
project(cp_project)
add_executable(cp_project cp.c)
install(TARGETS  cp_project DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")

