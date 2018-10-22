#include <stdio.h>
int main(void) {
	int n, sum = 0;
	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
			sum += n;
	} while (n);
	printf("%d\n", sum);
	return 0;
}