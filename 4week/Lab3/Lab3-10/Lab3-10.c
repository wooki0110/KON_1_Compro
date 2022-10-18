#pragma warning(disable:4996)
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float r;
	printf("input your radius : ");
	scanf("%f", &r);
	printf("radius : %f\n", r);
	printf("area : %f\n", r * r * PI);
	printf("round : %f\n", 2 * PI * r);
	return 0;
}