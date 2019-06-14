#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=120;
	int p;
	p = (int)&i;
	printf("%p\n", &i);//地址
	printf("%x\n", p);//int的长度（4）
	printf("%lu\n", sizeof(&i));
	printf("%lu\n", sizeof(int));


	/*
	1. p i 紧挨着的
	2. 先定义的变量，i在更高的地方，内存分配在stack（堆栈）中
	*/
	printf("%p\n", &i);
	printf("%p\n", &p);




	{
		// void* p;
		// int cnt = 0;
		// while((p = malloc(100 * 1024 * 1024))) {
		// 	cnt++;
		// }
		// printf("分配了%d00MB\n", cnt);
	}
	{
		int*p;
		printf("*p=%p\n", p);
	}
	{

		int a[] = {1,2,3,4,5,};
		int *p = a;
		int *q = &a[5];
		printf("%p %p\n", q, p);
	}
	{
		char ac[] = {0,1,2};
		char *p = &ac[0];
		char *q = ac;
		printf("%p %p\n", p, q);

	}

	return 0;
}

