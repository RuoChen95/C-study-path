#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8};
	a[10] = 99; // past the end of the array
	printf("%d\n", a[10]);
	return 0;
}