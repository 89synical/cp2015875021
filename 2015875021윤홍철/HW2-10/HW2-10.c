#include <stdio.h>
int main(void) {
	int n, i;
	printf("���� �Է� : ");
	scanf_s("%d", &n);
	for (i = 2; i < n + 1; i++) {
		if (n%i == 0)
			printf("%d ", i);
	}
	return 0;
}