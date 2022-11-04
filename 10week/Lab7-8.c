#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int total;
	for (i = 1; i < 6; i++) {
		for (j = i; j >= 1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}