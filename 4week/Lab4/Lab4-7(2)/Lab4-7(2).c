#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("input 2 numbers : ");
	scanf("%d %d", &num1, &num2);
	num1 > num2 ? printf("몫 : %d, 나머지 : %d\n", num1 / num2, num1 % num2)
		: printf("몫 : %d, 나머지 : %d\n", num2 / num1, num2 % num1);

	int a, b, c;
	printf("input 3 numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	a > b ? (a > c ? printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", a) : printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", c))
		: (b > c ? printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", b) : printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", c));

	return 0;
}