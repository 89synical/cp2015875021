#include <stdio.h>
int main(void) {
	int n, i;
	printf("정수 입력 : ");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++) {
		if (n%i == 0)
			break;
	}
	if (n == i) 
		printf("정수 %d는 소수입니다.\n", n);
	else 
		printf("정수 %d는 소수가 아닙니다.\n", n);
	return 0;
}