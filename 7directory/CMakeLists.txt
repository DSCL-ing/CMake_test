
cmake_minimum_required(VERSION 3.20)

project(xlog)

include_directories(xlog)

message("CMAKE_CURRENT_LIST_DIR = ${CMAKE_CURRENT_LIST_DIR}")

# CMAKE_LIBRARY_OUTPUT_DIRECTORY : linux动态库.so和mac动态库输出路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/lib")

# CMAKE_ARCHIVE_OUTPUT_DIRECTORY : windows静态库.lib  windows动态库.lib文件 linux静态库.a文件
# 一般库输出路径都设置成相同的,除非特别需要区分
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/lib")


# CMKAE_RUNTIME_OUTPUT_DIRECTORY : 执行程序 windows动态库dll文件 输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin")


# 改变行为的变量 BUILD_SHARED_LIBS,ON动态库,OFF静态库,默认OFF
set(BUILD_SHARED_LIBS OFF)

# cmake传递变量给C++
add_definitions(-Dxlog_STATIC) #默认值为1

add_library(xlog xlog/xlog.cc)

add_executable(test_xlog test_xlog/test_xlog.cc xlog)

target_link_libraries(test_xlog xlog)


