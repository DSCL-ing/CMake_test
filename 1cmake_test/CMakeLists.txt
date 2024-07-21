
cmake_minimum_required(VERSION 3.20.1)

project(first_cmake)

message(CHECK_START "查找xcpp")

# 设置嵌套查找缩进
set (CMAKE_MESSAGE_INDENT "--")

# 嵌套查找
message(CHECK_START "查找xlog")
message(CHECK_PASS "成功")

message(CHECK_START "查找xthreadpool")
message(CHECK_FAIL "失败")

# 取消缩进
set (CMAKE_MESSAGE_INDENT "")
message(CHECK_FAIL "失败")


add_executable(first_cmake main.cc)





