#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, k; //���� 4�� ����
	scanf("%d", &x); //x�� �� �Է�
	// ����, ���� ����ÿ� x�� ����� �� ����ǹǷ�
	// ���� �����ǵ��� �ϱ� ���ؼ� 3���� ������ x ����
	y = x; 
	z = x;
	k = x;
	printf("x(����) ����   ���� �� x(����)\n");
	//x++ ��������
	printf("%d       ", x);
	printf("x++ %4d %7d\n",x++, x);
	//x-- ��������
	printf("%d       ", y);
	printf("x-- %4d %7d\n", y--, y);
	//++x ��������
	printf("%d       ", z);
	printf("++x %4d %7d\n", ++z, z);
	//--x ��������
	printf("%d       ", k);
	printf("--x %4d %7d\n", --k, k);
	return 0;
}