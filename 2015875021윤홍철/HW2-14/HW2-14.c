#include<stdio.h>
int main(void) {
	int n, i, sum = 0;
	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (n < 7) {
			printf("에러 : 7 이상의 정수를 입력해주십시오.\n");
		}
	} while (n < 7);
	for (i = 7; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}