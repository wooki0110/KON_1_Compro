#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	//16진수 저장 변수 선언
	scanf("%x %x", &num1, &num2); //변수에 16진수 2개 입력
	printf("%#x\n", num1 + num2); //두 변수를 더한값을 출력
}