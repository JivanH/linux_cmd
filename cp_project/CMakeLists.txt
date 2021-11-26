cmake_minimum_required(VERSION 3.10)
project(cp_project)
add_executable(cp_project cp.c)
install(TARGETS  cp_project DESTINATION "/home/anna/Desktop/Linux_cmd/bin")

