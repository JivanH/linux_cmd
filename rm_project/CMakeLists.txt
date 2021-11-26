cmake_minimum_required(VERSION 3.10)
project(rm_project)
add_executable(rm_project rm.c)
install(TARGETS rm_project   DESTINATION "/home/anna/Desktop/Linux_cmd/bin")
