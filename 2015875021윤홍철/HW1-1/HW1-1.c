#include <stdio.h>
int main(void) {
	int a, b;
	printf("���� �Է� : ");
	scanf_s("%d %d", &a, &b);
	if (a == b)
		printf("a�� b�� ����.");
	else if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
}
