#include<stdio.h>
#include<string.h>
// strlen
int mylen(const char* s) {
	int cnt = 0;

	while (s[cnt] != '\0') {
		cnt++;
	}

	return cnt;
}

//strcmp
int mycompare(const char* s1, const char* s2) {
	int index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0') {
		index++;
	}

	return s1[index] - s2[index];
}

//strcpy
char* mycpy(char* dst, const char* src) {
	int index = 0;
	while(src[index] != '\0') {
		dst[index] = src[index];

		index++;
	}
	dst[index] = '\0';

	return dst;
}

// strcat
char* mycat(char* dst, const char* src) {
	int index = 0;
	while(dst[index] != '\0') {
		index++;
	}
	int index2 = 0;
	while(src[index2] != '\0') {
		dst[index] = src[index2];

		index++;
		index2++;
	}

	dst[index] = '\0';

	return dst;
}

int main(int argc, char const *argv[])
{
	/* code */
	char line[] = "12345";
	printf("%d\n", mylen(line));

	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", mycompare(s1, s2));

	char s3[] = "def";
	char s4[] = "asd";

	// dst src
	mycpy(s3, s4);
	printf("%s\n", s3);


	// strcat
	char s5[] = "abc\0\0\0";
	char s6[] = "def";
	mycat(s5, s6);

	printf("%s\n",  s5);


	return 0;
}