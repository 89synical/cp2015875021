#include <stdio.h>
int main(void) {
	int n;
	do {
		printf("���� �Է� : ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("���� : ���� ������ �Է����ּ���.\n");
		}
	} while (n <= 0);
	printf("%d\n", 2*n);
	return 0;
}