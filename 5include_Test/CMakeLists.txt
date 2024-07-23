
cmake_minimum_required(VERSION 3.20)

project("cmake_include")

message("begin include")

# cmake中的 include 和C/C++中的include类似,都是直接把文件内容直接拷贝到当前文件.多次引用多次复制
include("cmake/test_cmake.cmake")
include("cmake/test_cmake.cmake")

include("cmake/test_cmake1.cmake" OPTIONAL) #OPTIONAL选项,表示可选,当文件不存在时不报错.

include("cmake/test_cmake1.cmake" OPTIONAL RESULT_VARIABLE ret)
message("ret = ${ret}") #ret = NOTFOUND


include("cmake/test_cmake.cmake" OPTIONAL RESULT_VARIABLE ret)
message("ret = ${ret}") #ret = NOTFOUND

message("end include")
