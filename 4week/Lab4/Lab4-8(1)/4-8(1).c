#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month;
	printf("input your month : ");
	scanf("%d", &month);
	month > 6 ? printf("�Ϲݱ��Դϴ�.\n") : printf("��ݱ��Դϴ�.\n");

	return 0;
}
