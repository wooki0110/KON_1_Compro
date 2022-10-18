#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sel_num, month;
	float power;
	printf("분류번호를 입력하시오 : ");
	scanf("%d", &sel_num);
	printf("사용전력량을 입력하시오 : ");
	scanf("%d", &power);
	printf("궁금한 월을 입력하시오 : ");
	scanf("%d", &month);
	if (sel_num == 1) {
		switch (month) {
		case 7: case 8:
			printf("전기요금 : %f\n", 4090 + 73.0 * power);
			break;
		case 4: case 5: case 6: case 9:
			printf("전기요금 : %f\n", 4090 + 46.9 * power);
			break;
		default:
			printf("전기요금 : %f\n", 4090 + 50.5 * power);
			break;
		}
	}
	else if (sel_num == 2) {
		switch (month) {
		case 7: case 8:
			printf("전기요금 : %f\n", 1070 + 36.4 * power);
			break;
		default:
			printf("해당 월에는 전력요금이 존재하지 않습니다\n");
			break;
		}
	}
	else {
		switch (month) {
		case 7: case 8:
			printf("전기요금 : %f\n", 5320 + 94.2 * power);
			break;
		case 4: case 5: case 6: case 9:
			printf("전기요금 : %f\n", 5320 + 62.7 * power);
			break;
		default:
			printf("전기요금 : %f\n", 5320 + 66.8 * power);
			break;
		}
	}
	return 0;
}