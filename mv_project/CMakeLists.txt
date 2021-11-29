cmake_minimum_required(VERSION 3.10)
project(mv_project)
add_executable(mv_project mv.c)
install(TARGETS mv_project DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")

