#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	//16���� ���� ���� ����
	scanf("%x %x", &num1, &num2); //������ 16���� 2�� �Է�
	printf("%#x\n", num1 + num2); //�� ������ ���Ѱ��� ���
}