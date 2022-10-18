#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, k; //변수 4개 설정
	scanf("%d", &x); //x의 값 입력
	// 전위, 후위 연산시에 x에 저장된 값 변경되므로
	// 값이 유지되도록 하기 위해서 3개의 변수에 x 저장
	y = x; 
	z = x;
	k = x;
	printf("x(이전) 수식   식의 값 x(이후)\n");
	//x++ 후위연산
	printf("%d       ", x);
	printf("x++ %4d %7d\n",x++, x);
	//x-- 후위연산
	printf("%d       ", y);
	printf("x-- %4d %7d\n", y--, y);
	//++x 전위연산
	printf("%d       ", z);
	printf("++x %4d %7d\n", ++z, z);
	//--x 전위연산
	printf("%d       ", k);
	printf("--x %4d %7d\n", --k, k);
	return 0;
}