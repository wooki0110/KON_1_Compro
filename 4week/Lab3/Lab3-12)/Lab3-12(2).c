#include <stdio.h>

int main(void)
{
	char a = '\0', b;

	puts("�����ϳ� �Է� :");
	a = getchar();
	putchar(a);
	putchar('\n');

	puts("���� �ΰ� �Է� :");
	a = getchar();
	b = getchar();
	putchar(a);
	putchar(a);
	putchar(b);
	putchar('\n');
	return 0;
}