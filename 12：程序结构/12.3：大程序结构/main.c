#include <stdio.h> // 只在指定系统目录上
#include "max.h" // 现在当前目录上找，后在指定系统目录上找

#include "min.h"

// 如果编译器没有原型声明，则会猜测输入输出都是int

// 用`gcc main.c max.c`编译
// 用`gcc --save-temps main.c -c`获取编译的中间文件
// 观察main.i
// include：就是在编译之前进行直接的文本插入

// 误区
// 不是用于引入库的

// 一般做法是任何.c都有对应的同名的.h，将所有对外公开的函数的原型都放进去

// 全局变量默认是在所有的.c中可用，如果要独立，增加static关键字

int main(void)
{
	printf("%f\n", max(5, gAll));
	return 0;
}