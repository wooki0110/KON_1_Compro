#include <stdio.h>

#define PI 3.14

int main()
{
	float r = 7.58;
	float area = (r * r * PI);
	float cir = 2 * PI * r;

	printf("원의 면적은 : %f\n", area);
	printf("원의 둘레는 : %f\n", cir);

	return 0;
}