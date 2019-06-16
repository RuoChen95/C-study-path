#include <stdio.h>
#define PI 3.14159 // 编译之前进行预处理 - 宏 - 简单的替换
#define cube(x) ((x)*(x)*(x)) // 编译之前进行预处理 - 宏 - 带参数
#define MIN(a,b) ((a)>(b)?(b):(a)) // 同上

int main(int argc, char const *argv[])
{
	return 0;
}