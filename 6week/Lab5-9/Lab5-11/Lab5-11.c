#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y;
	printf("�� ���� �Է��Ͻÿ� :");
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