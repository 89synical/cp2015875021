#include <stdio.h>
int main(void) {
	int n, sum = 0;
	do {
		printf("���� �Է� : ");
		scanf_s("%d", &n);
			sum += n;
	} while (n);
	printf("%d\n", sum);
	return 0;
}