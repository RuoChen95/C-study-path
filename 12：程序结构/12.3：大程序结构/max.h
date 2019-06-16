// 这是一个头文件
// 类似于一个合同
// 规则：
// 1. 只有声明可以被放在头文件内
// 2. 同名结构不能被重复声明

// 声明不产生代码
// 1. 函数
// 2. 变量
// 3. 结构
// 4. 宏
// 5. 枚举
// 6. 类型
// 7. inline函数

// *标准头文件结构*作为保护
// 保证一个头文件只会在一个编译单元中inclue一次
#ifndef __MAX_H__ // 如果没有定义这个宏的话(名字随意取的)
// 定义这个宏等之后的行为
#define __MAX_H__


// 函数的声明
double max(double a, double b);

// 变量的声明
extern int gAll; // 在整个项目的某个地方存在gAll

struct Node {
	int value;
	char* name;
};
// end
#endif