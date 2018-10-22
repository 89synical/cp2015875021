#include<stdio.h>
int main(void) {
	int num, i, j;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	for (j = num; j >= 0; j--) {
		for (i = j; i >= 0; i--)
			printf("%d", i);
		for (i = 1; i <= j; i++)
			printf("%d", i);
		printf("\n");
	}
	for (j = 1; j <= num; j++) {
		for (i = j; i >= 0; i--)
			printf("%d", i);
		for (i = 1; i <= j; i++)
			printf("%d", i);
		printf("\n");
	}
		return 0;
}