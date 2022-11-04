#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 0; i < 8; i++) {
		for (j = i; j >= 0; j--) {
			printf("%d", j);
		}
		for (k = 1; k <= i; k++) {
			printf("%d", k);
		}
		printf("\n");
	}
}