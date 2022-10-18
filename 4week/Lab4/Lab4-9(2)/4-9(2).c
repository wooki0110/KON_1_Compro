#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money;
	printf("input your money : ");
	scanf("%d", &money);
	printf("50000원 권 : %d개, ", money / 50000);
	printf("10000원 권 : %d개, ", (money % 50000) / 10000);
	printf("5000원 권 : %d개, ", ((money % 50000) % 10000) / 5000);
	printf("1000원 권 : %d개", (((money % 50000) % 10000) % 5000) / 1000);
	return 0;
}