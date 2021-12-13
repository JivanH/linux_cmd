cmake_minimum_required(VERSION 3.10)
project(cd_project)
add_executable(cd_project cd.c)
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )
install(TARGETS cd_project DESTINATION "${EXECUTABLE_OUTPUT_PATH}")


