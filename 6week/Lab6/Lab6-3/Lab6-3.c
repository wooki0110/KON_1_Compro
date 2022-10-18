#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2; //피연산자 입력 변수 2개
	char op;	//연산자 입력 변수
	printf("정수 2개를 입력하시오 :");
	scanf("%d %d", &num1, &num2); // 피연산자 2개 입력
	printf("연산자를 입력하시오 :");
	scanf(" %c", &op);	// 연산자 입력

	if (op == '+') {	//연산자가 +라면
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (op == '-') { //연산자가 -라면
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (op == '*') { //연산자가 *라면
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else if (op == '/') { //연산자가 /라면
		printf("%d / %d = %d", num1, num2, num1 / num2);
	}
	else if (op == '%') { //연산자가 %라면
		printf("%d % %d = %d", num1, num2, num1 % num2);
	}
	else
		printf("error!");
	return 0;
}