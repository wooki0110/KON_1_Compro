#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char color;	//��ȣ�� ���� ���� ���� ����
	printf("��ȣ���� ����: (R,G,Y): ");
	scanf("%c", &color); //���� �Է� �� ���� ����

	switch (color) {
	case 'g': case 'G':
		printf("����!");
		break;
	case 'r': case 'R':
		printf("����!");
		break;
	case 'y': case 'Y':
		printf("����!");
		break;
	default:
		break;
	}
	return 0;
}