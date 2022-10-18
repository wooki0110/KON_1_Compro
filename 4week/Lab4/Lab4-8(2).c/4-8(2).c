#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int o_money;
	int year;
	printf("input your origin money : ");
	scanf("%d", &o_money);
	o_money >= 1000000 ? printf("input year want to know : ") : printf("money under 1000000");
	o_money >= 1000000 ? scanf("%d", &year) : printf("");
	o_money >= 1000000 ? printf("your money is : %ld\n", o_money / 1000 * (45 * year)) : printf("");
	return 0;
}