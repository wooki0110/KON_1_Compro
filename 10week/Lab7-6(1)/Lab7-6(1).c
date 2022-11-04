#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 2;
	while (num < 11) {
		if (num % 2 == 0) {
			printf("%d\n", num);
		}
		num++;
	}
	return 0;
}