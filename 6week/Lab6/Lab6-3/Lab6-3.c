#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2; //�ǿ����� �Է� ���� 2��
	char op;	//������ �Է� ����
	printf("���� 2���� �Է��Ͻÿ� :");
	scanf("%d %d", &num1, &num2); // �ǿ����� 2�� �Է�
	printf("�����ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &op);	// ������ �Է�

	if (op == '+') {	//�����ڰ� +���
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (op == '-') { //�����ڰ� -���
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (op == '*') { //�����ڰ� *���
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else if (op == '/') { //�����ڰ� /���
		printf("%d / %d = %d", num1, num2, num1 / num2);
	}
	else if (op == '%') { //�����ڰ� %���
		printf("%d % %d = %d", num1, num2, num1 % num2);
	}
	else
		printf("error!");
	return 0;
}