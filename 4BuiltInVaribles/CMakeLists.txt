
cmake_minimum_required(VERSION 3.20)

project(Xlog)
# 提供信息的变量 PROJECT_NAME:项目名称 -- 对应project的值

# 改变行为的变量 BUILD_SHARED_LIBS,ON动态库,OFF静态库,默认OFF
set(BUILD_SHARED_LIBS ON)

# 描述系统的变量
message("MSVC = " ${MSVC})
message("WIN32 = " ${WIN32})
message("UNIX = " ${UNIX})
message("CMAKE_SYSTEM_NAME = " ${CMAKE_SYSTEM_NAME})

add_library(${PROJECT_NAME}lib xlog.cc xlog.h)
