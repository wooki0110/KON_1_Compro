#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, month;
	printf("�⵵�� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &year, &month);
	switch (year % 4) {
	case 0:
		switch (year % 100) {
		case 0:
			switch (year % 400) {
				case 0:
					switch (month) {
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						printf("31���Դϴ�.");
						break;
					case 4: case 6: case 9: case 11:
						printf("30���Դϴ�");
						break;
					default:
						printf("29���Դϴ�");
						break;
					}
					break;
				default:
					switch (month) {
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						printf("31���Դϴ�.");
						break;
					case 4: case 6: case 9: case 11:
						printf("30���Դϴ�");
						break;
					default:
						printf("28���Դϴ�");
						break;
					}
					break;
			}
			break;
		default:
			switch (month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("31���Դϴ�.");
				break;
			case 4: case 6: case 9: case 11:
				printf("30���Դϴ�");
				break;
			default:
				printf("29���Դϴ�");
				break;
			}
			break;
		}
		break;
	default:
		switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31���Դϴ�.");
			break;
		case 4: case 6: case 9: case 11:
			printf("30���Դϴ�");
			break;
		default:
			printf("28���Դϴ�");
			break;
		}
		break;
	}
	return 0;
}