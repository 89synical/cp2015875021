#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("���� �Է� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			printf("%d", a);
		else
			printf("%d", c);
	}
	else
	{
		if (b > c)
			printf("%d", b);
		else
			printf("%d", c);
	}
}
