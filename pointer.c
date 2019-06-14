#include <stdio.h>
#include <stdlib.h>
void f(int *p);
void g(int k);
void minmax(int *a, int len);

int main()
{
	int i=0;
	// int p;
	// p = (int)&i;
	// printf("%p\n", &i);
	// printf("%p\n", &p);

	// {
	// 	int a[10];
	// 	printf("%p\n", &a);
	// 	printf("%p\n", a);
	// 	printf("%p\n", &a[0]);
	// 	printf("%p\n", &a[1]);
	// }

	printf("&i=%p\n", &i);
	f(&i);
	g(i);
	int a[] = {1,2,3,4};
	printf("main %lu\n", sizeof(a));
	printf("dizhi: %p\n", a);
	minmax(a, 4);

	printf("a[0] = %d\n", a[0]);


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

void f(int *p) {
	printf(" p=%p\n", p);
	printf("*p=%d\n", *p);

	*p = 26;
}
void g(int k) {
	printf(" k=%d\n", k);
}

void minmax(int *a, int len) {
	printf("dizhi: %p\n", a);
	printf("minmax %lu\n",  sizeof(a));
	a[0] = 1000;
}

