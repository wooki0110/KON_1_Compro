#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int count = 0;
	do {
		printf("input your number : ");
		scanf("%d", &num);
		printf("%d\n", num);
		count++;
	} while (count < 5);
	return 0;
}