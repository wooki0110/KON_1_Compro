#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char color;	//신호등 색깔 저장 변수 선언
	printf("신호등의 색깔: (R,G,Y): ");
	scanf("%c", &color); //색깔 입력 및 변수 저장
	
	if (color == 'g' || color == 'G') {
		printf("진행!");
	}
	else if (color = 'r' || color == 'R') {
		printf("정지!");
	}
	else {
		printf("주의1");
	}
	return 0;
}