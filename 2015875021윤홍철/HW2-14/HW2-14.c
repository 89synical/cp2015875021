#include<stdio.h>
int main(void) {
	int n, i, sum = 0;
	do {
		printf("���� �Է� : ");
		scanf_s("%d", &n);
		if (n < 7) {
			printf("���� : 7 �̻��� ������ �Է����ֽʽÿ�.\n");
		}
	} while (n < 7);
	for (i = 7; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}