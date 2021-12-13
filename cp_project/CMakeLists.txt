cmake_minimum_required(VERSION 3.10)
project(cp_project)
add_executable(cp_project cp.c)
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )
install(TARGETS cp_project DESTINATION "${EXECUTABLE_OUTPUT_PATH}")

