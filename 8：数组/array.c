#include <stdio.h>
int main()
{
	const int number = 10; // 数组大小
	int x;
	scanf("%d", &x);
	int count[number]; // 定义数组
	int i;
	// for (i = 0; i <number; i++) { //初始化数组
	// 	count[i] = 0;
	// }
	while (x!= -1) {

		if (x >=0 && x <= 9) {
			count[x] ++; //数组参与运算
		}
		scanf("%d", &x);
	}

	for (i = 0; i <number; i++) { //数组输出
		printf("%d\n", count[i]);
	}

	return 0;
}