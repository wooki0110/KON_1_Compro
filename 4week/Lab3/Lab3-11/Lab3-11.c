#pragma warning(disable:4996)
#include <stdio.h>


void main(void)
{
	int num;
	printf("4자리 정수 입력 : ");
	scanf("%d", &num);
	printf("%10d\n", num);
	printf("%010d\n", num);
	printf("%0+10d\n", num);
	printf("%-10d\n", num);
	printf("%10o\n", num);
	printf("%010o\n", num);
	printf("%10x\n", num);
	printf("%#010x\n", num);
}