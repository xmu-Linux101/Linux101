# Linux 下C/C++ 程序设计

## 起源
很多同学在写数据结构作业时，没有单独为使用到的队列、堆栈等数据结构写相关的库类。

标准的作业结构应该是像本目录中的程序一般，专门写一个栈的操作函数，然后在main等主文件中调用。

## 文件目录说明
+ include 自己设计的.h头文件之所在
+ include/my_stack.h 栈所使用的头文件。文件中已经定义出其包含的功能函数。具体请查看文件注释
+ my_stack.c 栈的功能函数的实现文件。目前为空文件。
+ main.c 一个简单的主程序，调用自定义栈的功能测试入栈、出栈的功能。***此主程序未经过运行测试，可能存在bug***。
+ Makefile make的控制文件。

## 试题要求

### 实现my_stack.h中的功能函数
+ 实现代码放在my_stack.c中。
+ 如果使用C++语法，可以把文件改名为my_stack.cpp
+ 目录下不能同时有my_stack.c 和 my_stack.cpp，否则评分取最低分

### 实现Makefile
+ 实现make命令完成所有编译、链接工作
+ 实现make clean命令可以恢复代码为原始状态

## 评分标准

### Git Repository（1分）
+ 将代码保存在新建的独立于Linux101的仓库，1分

### my_stack实现（8分）
+ include my_stack.h，1分
+ stack初始化（含作用域控制），1分
+ stack_push，1分
+ stack_pop，1分
+ stack_capacity，1分
+ stack_size，1分
+ stack_is_empty，1分
+ stack_is_full，1分

### Makefile（6分）
+ make实现编译工作，2分
+ make实现链接工作，2分
+ make实现clean操作，2分
