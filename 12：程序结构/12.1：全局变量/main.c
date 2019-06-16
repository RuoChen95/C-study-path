#include <stdio.h>

int f(void);
// 如果全局变量没有被初始化，会自动得到0值
// 指针会得到NULL
// 只能用编译时刻已知的值来进行初始化
int gAll=12;
// int notRight = f();
// int notRight2 = gAll;
int main(void) {

	int bend; // 相反：如果本地变量没有初始化，则值随机

	printf("%s gAll=%d\n", __func__, gAll); // 小细节：__func__代表当前调用的函数名称
	f();
	f();
	f();
	printf("%s gAll=%d\n", __func__, gAll);
	return 0;
}

int f(void) {
	int gAll = 1; // 会被隐藏
 	// 不同本地变量每次函数调用的时候都会进行初始化
	// 离开后本地变量不存在了（不再受控）
	int all = 1;
	// 静态本地变量（实际上是全局变量，地址是相连的）
	// 特殊：全局生存期，本地作用域
	static int newAll = 1; 
	printf("%s gAll=%d\n", __func__, gAll);
	gAll +=2;
	newAll++;
	printf("%s gAll=%d\n", __func__, gAll);
	printf("newAll=%d\n", newAll);


	return 0;
}

// tips
// 不要使用全局变量来在函数间传递参数和结果
// 避免使用全局变量