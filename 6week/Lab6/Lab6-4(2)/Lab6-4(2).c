#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char color;	//신호등 색깔 저장 변수 선언
	printf("신호등의 색깔: (R,G,Y): ");
	scanf("%c", &color); //색깔 입력 및 변수 저장

	switch (color) {
	case 'g': case 'G':
		printf("진행!");
		break;
	case 'r': case 'R':
		printf("정지!");
		break;
	case 'y': case 'Y':
		printf("주의!");
		break;
	default:
		break;
	}
	return 0;
}