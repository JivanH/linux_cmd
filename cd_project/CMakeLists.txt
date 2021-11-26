cmake_minimum_required(VERSION 3.10)
project(cd_project)
add_executable(cd_project cd.c)
install(TARGETS  cd_project DESTINATION "/home/anna/Desktop/Linux_cmd/bin")

