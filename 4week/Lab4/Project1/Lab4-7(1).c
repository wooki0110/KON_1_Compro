#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("input your num under 10million : ");
	scanf("%d", &num);
	printf("%d만", num / 10000);
	printf("%d천", (num % 10000) / 1000);
	printf("%d백", ((num % 10000) % 1000) / 100);
	printf("%d십", (((num % 10000) % 1000) % 100) / 10);
	printf("%d\n", (((num % 10000) % 1000) % 100) % 10);

	return 0;
}