cmake_minimum_required(VERSION 3.10)
project(mv_project)
add_executable(mv_project mv.c)
install(TARGETS mv_project DESTINATION "/home/anna/Desktop/Linux_cmd/bin")

