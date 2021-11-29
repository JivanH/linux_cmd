cmake_minimum_required(VERSION 3.10)
project(mv)
add_executable(mv mv.c)
install(TARGETS mv DESTINATION "~/Рабочий стол/linux_cmd/bin")
