#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	printf("�ñ��� �⵵�� �Է��Ͻÿ� :");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("�����Դϴ�.");
			}
			else
				printf("����Դϴ�.");
		}
		else
			printf("�����Դϴ�.");
	}
	else
		printf("����Դϴ�.");
	return 0;
}