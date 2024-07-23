
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


aux_source_directory("." M_SRC)
aux_source_directory("./src" SRC)

include_directories("./include")
file(GLOB HDR_LIST "include/*.h" "include/*.hpp")


add_executable(${PROJECT_NAME} ${M_SRC} ${SRC} ${HDR_LIST})



