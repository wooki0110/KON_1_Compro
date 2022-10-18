#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1, num2;
	int sel;
	printf("두 실수 입력: ");
	scanf("%f %f", &num1, &num2);
	printf("연산종류 번호선택 1<+>, 2<->, 3(*), 4(/): ");
	scanf("%d", &sel);
	if (sel == 1) {
		printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
	}
	else if (sel == 2) {
		printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
	}
	else if (sel == 3) {
		printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
	}
	else
		printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);

	return 0;
}