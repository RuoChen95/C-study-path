#include <stdio.h>
int main(int argc, char const *argv[])
{
	int* p, q; //p是指针，q是int
	q = 1;
	p = &q;
	printf("%p %d\n", p, q);
	printf("%p %p\n", &p, &q);
	return 0;
}