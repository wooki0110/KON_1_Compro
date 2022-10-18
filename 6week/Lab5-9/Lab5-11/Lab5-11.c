#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y;
	printf("두 수를 입력하시오 :");
	scanf("%f %f", &x, &y);
	if (x > 0) {
		if (y > 0) {
			printf("%f\n", x + y);
		}
		else {
			printf("%f\n", x - y);
		}
	}
	else {
		if (y > 0) {
			printf("%f\n", -x + y);
		}
		else {
			printf("%f\n", -x - y);
		}
	}
	return 0;
}