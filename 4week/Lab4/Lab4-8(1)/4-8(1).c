#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month;
	printf("input your month : ");
	scanf("%d", &month);
	month > 6 ? printf("하반기입니다.\n") : printf("상반기입니다.\n");

	return 0;
}
