
cmake_minimum_required(VERSION 3.20.1)

project(first_cmake)


set(VAR1 "变量1的值")
set(VAR2 "VAR1")
message(\${VAR1}=${${VAR2}})

add_executable(first_cmake main.cc)





