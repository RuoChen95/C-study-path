#include <stdio.h>

void minmax(int * ar) {
	printf("%lu %d\n", sizeof(ar), *ar); // *ar = ar[0]
	ar[0] = 1000;
}
int main(int argc, char const *argv[])
{
	int a[8] = {1,2,3,4,5,6,7,8};
	printf("%p\n", a);
	printf("%lu\n", sizeof(a));

	minmax(a);

	printf("%i\n", *a);


	return 0;
}