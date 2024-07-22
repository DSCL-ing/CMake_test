
cmake_minimum_required(3.20)

project(cmake_test)

#[[格式：
\033[显示方式;前景色;背景色 m 
\033[0m
(033中的0和0m的0可以省略)


显示方式    意义
0   终端默认设置       
1   高亮显示   
4   使用下划线 
5   闪烁       
7   反白显示   
8   不可见

\033[1;31;40m
<!--1-高亮显示 31-前景色红色 40-背景色黑色-->

前景色 背景色 颜色
30     40     黑色 
31     41     红色 
32     42     绿色 
33     43     黃色 
34     44     蓝色 
35     45     紫红色 
36     46     青蓝色 
37     47     白色
]]

string(ASCII 27 Esc) #Esc:escape:表示转义字符

set(RED "${Esc}[1;31m")
set(END "${Esc}[0m")

set(BLUE "${Esc}[1;34m")
set(BLUE_BLACK "${Esc}[7;34;40m")

message("${RED}红色内容${END} 默认颜色")
message("${BLUE}蓝色内容${END} 默认颜色")
message("${BLUE_BLACK}蓝色内容${END} 黑色背景")


