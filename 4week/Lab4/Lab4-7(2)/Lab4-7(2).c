#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("input 2 numbers : ");
	scanf("%d %d", &num1, &num2);
	num1 > num2 ? printf("�� : %d, ������ : %d\n", num1 / num2, num1 % num2)
		: printf("�� : %d, ������ : %d\n", num2 / num1, num2 % num1);

	int a, b, c;
	printf("input 3 numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	a > b ? (a > c ? printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", a) : printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", c))
		: (b > c ? printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", b) : printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", c));

	return 0;
}