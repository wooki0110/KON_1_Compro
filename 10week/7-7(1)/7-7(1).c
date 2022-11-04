#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total = 1;
	int i;
	for (i = 1; i < 11; i++)
	{
		total *= i;
	}
	printf("%d", total);
	return 0;
}