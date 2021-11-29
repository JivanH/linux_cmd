cmake_minimum_required(VERSION 3.10)
project(cd_project)
add_executable(cd_project cd.c)
install(TARGETS  cd_project DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")

