#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	//16���� ���� ���� ����
	printf("������ �Է��Ͻÿ�:");
	scanf("%x", &num1); //num1�� 16���� 1�� �Է�
	printf("������ �Է��Ͻÿ�:");
	scanf("%x", &num2); //num2�� 16���� 1�� �Է�
	printf("���� ����� %d(10����) �Դϴ�.\n", num1 + num2);
	printf("���� ����� %x(16����) �Դϴ�.", num1 + num2);

	return 0;
}