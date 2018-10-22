#include<stdio.h>
int main(void) {
	int num, i, j, k;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
		for (j = (num - 1); j >= 0; j--) {
			for (i = 1; i <= (2 * j + 1); i++) {
				printf("*");
			}
			printf("\n");
		}
		for (j = 1; j < num; j++) {
			for (i = 1; i <= (2 * j + 1); i++) {
				printf("*");
			}
			printf("\n");
		}
	return 0;
}