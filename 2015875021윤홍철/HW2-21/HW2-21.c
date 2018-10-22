#include<stdio.h>
int main(void) {
	int num, n, i, sum = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	for (n = 2; n <= num; n++) {
		for (i = 2; i < n; i++) {
			if (n%i == 0)
				break;
		}
		if (n == i)
			sum += n;
	}
	printf("%d", sum);
	return 0;
}