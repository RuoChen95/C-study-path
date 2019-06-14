#include <stdio.h>
// 声明
struct date
{
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	// 定义
	struct date today;

	today.month = 7;
	today.day = 31;
	today.year = 2014;

	printf("%d %d %d\n", today.year, today.month, today.day);

	return 0;
}