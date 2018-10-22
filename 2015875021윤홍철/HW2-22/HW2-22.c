#include<stdio.h>
#include<limits.h>
int main(void) {
	int n, max=INT_MIN;
	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (n > max)
			max = n;
	} while (n);
	printf("%d\n", max);
	return 0;
}