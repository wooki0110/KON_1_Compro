#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sel_num, month;
	float power;
	printf("�з���ȣ�� �Է��Ͻÿ� : ");
	scanf("%d", &sel_num);
	printf("������·��� �Է��Ͻÿ� : ");
	scanf("%d", &power);
	printf("�ñ��� ���� �Է��Ͻÿ� : ");
	scanf("%d", &month);
	if (sel_num == 1) {
		switch (month) {
		case 7: case 8:
			printf("������ : %f\n", 4090 + 73.0 * power);
			break;
		case 4: case 5: case 6: case 9:
			printf("������ : %f\n", 4090 + 46.9 * power);
			break;
		default:
			printf("������ : %f\n", 4090 + 50.5 * power);
			break;
		}
	}
	else if (sel_num == 2) {
		switch (month) {
		case 7: case 8:
			printf("������ : %f\n", 1070 + 36.4 * power);
			break;
		default:
			printf("�ش� ������ ���¿���� �������� �ʽ��ϴ�\n");
			break;
		}
	}
	else {
		switch (month) {
		case 7: case 8:
			printf("������ : %f\n", 5320 + 94.2 * power);
			break;
		case 4: case 5: case 6: case 9:
			printf("������ : %f\n", 5320 + 62.7 * power);
			break;
		default:
			printf("������ : %f\n", 5320 + 66.8 * power);
			break;
		}
	}
	return 0;
}