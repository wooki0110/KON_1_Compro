#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money;
	printf("input your money : ");
	scanf("%d", &money);
	printf("50000�� �� : %d��, ", money / 50000);
	printf("10000�� �� : %d��, ", (money % 50000) / 10000);
	printf("5000�� �� : %d��, ", ((money % 50000) % 10000) / 5000);
	printf("1000�� �� : %d��", (((money % 50000) % 10000) % 5000) / 1000);
	return 0;
}