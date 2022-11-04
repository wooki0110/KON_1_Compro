#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int total = 0;
	for (i = 1; i < 11; i++)
	{
		total += i;
		printf("total : %d\n", total);
		if (total > 20) {
			printf("program quit\n");
			break;
		}
	}
	return 0;
}