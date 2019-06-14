#include "array.h"

Array array_create(int int_size) {
	Array a;
	a.size = int_size;
	a.array=(int*)malloc(sizeof(int) * a.size);
	return a;
}
void array_free(Array *a) {
	
}
int array_size(const Array *a);
int* array_at(Array *a, int index);
void array_inflate(Array *a, int more_size);

int main(int argc, char const *argv[])
{
	/* code */


	return 0;
}