#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	printf("궁금한 년도를 입력하시오 :");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("윤년입니다.");
			}
			else
				printf("평년입니다.");
		}
		else
			printf("윤년입니다.");
	}
	else
		printf("평년입니다.");
	return 0;
}