cmake_minimum_required(VERSION 3.10)
project(mv_project)
add_executable(mv_project mv.c)
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )
install(TARGETS mv_project DESTINATION "${EXECUTABLE_OUTPUT_PATH}")

