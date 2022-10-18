#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, month;
	printf("년도와 달을 입력하시오 : ");
	scanf("%d %d", &year, &month);
	switch (year % 4) {
	case 0:
		switch (year % 100) {
		case 0:
			switch (year % 400) {
				case 0:
					switch (month) {
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						printf("31일입니다.");
						break;
					case 4: case 6: case 9: case 11:
						printf("30일입니다");
						break;
					default:
						printf("29일입니다");
						break;
					}
					break;
				default:
					switch (month) {
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						printf("31일입니다.");
						break;
					case 4: case 6: case 9: case 11:
						printf("30일입니다");
						break;
					default:
						printf("28일입니다");
						break;
					}
					break;
			}
			break;
		default:
			switch (month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("31일입니다.");
				break;
			case 4: case 6: case 9: case 11:
				printf("30일입니다");
				break;
			default:
				printf("29일입니다");
				break;
			}
			break;
		}
		break;
	default:
		switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31일입니다.");
			break;
		case 4: case 6: case 9: case 11:
			printf("30일입니다");
			break;
		default:
			printf("28일입니다");
			break;
		}
		break;
	}
	return 0;
}