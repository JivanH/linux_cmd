cmake_minimum_required(VERSION 3.10)
project(rm)
add_executable(rm rm.c)
install (TARGETS rm DESTINATION "~/Рабочий стол/linux_cmd/bin")
