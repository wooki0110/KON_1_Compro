#include <stdio.h>

#define PI 3.14

int main()
{
	float r = 7.58;
	float area = (r * r * PI);
	float cir = 2 * PI * r;

	printf("���� ������ : %f\n", area);
	printf("���� �ѷ��� : %f\n", cir);

	return 0;
}