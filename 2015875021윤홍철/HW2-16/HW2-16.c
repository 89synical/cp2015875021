#include <stdio.h>
int main(void) {
	int n, i, j=1;
	printf("정수 입력 : ");
	scanf_s("%d", &n);
	if (n < 0)
		j = j * -1;
		for (i = 1; (n / j) >= 10; i++) {
			j = j * 10;
		}
	printf("%d\n", i);
	return 0;
}