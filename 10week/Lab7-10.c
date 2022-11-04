#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;
	for (i = 0; i <= 100; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) { }
		else {
			count++;
			printf("%3d", i);
			if (count >= 10) {
				count = 0;
				printf("\n");
			}
		}
	}
	return 0;
}