#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char color;	//��ȣ�� ���� ���� ���� ����
	printf("��ȣ���� ����: (R,G,Y): ");
	scanf("%c", &color); //���� �Է� �� ���� ����
	
	if (color == 'g' || color == 'G') {
		printf("����!");
	}
	else if (color = 'r' || color == 'R') {
		printf("����!");
	}
	else {
		printf("����1");
	}
	return 0;
}