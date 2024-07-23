
#[[
项目目录结构
主目录
    CMakeLists.txt
    main.cc
    src/
        xlog.cpp 
        xthread.cc
        xtest.c
    include/
        xlog.h
        xthread.hpp
]]


cmake_minimum_required(VERSION 3.20)

project("auto_add_source")

include_directories("./include")

aux_source_directory("." M_SRC)
aux_source_directory(".src" SRC)

add_executable(${PROJECT_NAME} ${M_SRC} ${SRC})
