#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	//16진수 저장 변수 선언
	printf("정수를 입력하시오:");
	scanf("%x", &num1); //num1에 16진수 1개 입력
	printf("정수를 입력하시오:");
	scanf("%x", &num2); //num2에 16진수 1개 입력
	printf("덧셈 결과는 %d(10진수) 입니다.\n", num1 + num2);
	printf("덧셈 결과는 %x(16진수) 입니다.", num1 + num2);

	return 0;
}