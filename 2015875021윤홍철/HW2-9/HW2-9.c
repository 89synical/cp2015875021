#include <stdio.h>
int main(void) {
	int n, i;
	do {
		printf("���� �Է� : ");
		scanf_s("%d", &n);
		if (n < 1 || n > 9) {
			printf("1~9 ������ ������ �Է����ּ���.\n");
		}
	} while (n < 1 || n > 9);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d \n", n, i, n*i);
	return 0;
}