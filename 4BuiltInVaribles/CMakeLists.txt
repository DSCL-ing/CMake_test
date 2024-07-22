
cmake_minimum_required(VERSION 3.20)

project(xlog)
# 提供信息的变量 PROJECT_NAME:项目名称 -- 对应project的值

# 改变行为的变量 BUILD_SHARED_LIBS,ON动态库,OFF静态库,默认OFF
set(BUILD_SHARED_LIBS OFF)

# cmake传递变量给C++
add_definitions(-Dxlog_STATIC) #默认值为1

# 描述系统的变量
message("MSVC = " ${MSVC})
message("WIN32 = " ${WIN32})
message("UNIX = " ${UNIX})
message("CMAKE_SYSTEM_NAME = " ${CMAKE_SYSTEM_NAME})

# 控制构建过程的变量 输出路径控制 CMAKE_COLOR_MAKEFILE:makefile执行过程是否有颜色,默认ON
# set(CMAKE_COLOR_MAKEFILE OFF)

add_library(${PROJECT_NAME}lib xlog.cc xlog.h)
