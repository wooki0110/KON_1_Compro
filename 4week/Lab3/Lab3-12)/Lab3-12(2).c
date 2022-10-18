#include <stdio.h>

int main(void)
{
	char a = '\0', b;

	puts("문자하나 입력 :");
	a = getchar();
	putchar(a);
	putchar('\n');

	puts("문자 두개 입력 :");
	a = getchar();
	b = getchar();
	putchar(a);
	putchar(a);
	putchar(b);
	putchar('\n');
	return 0;
}