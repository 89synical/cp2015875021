#include<stdio.h>
int main(void) {
	int num, i, j;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	for (j = 0; j < num; j++) {
		for (i = 1; i <= (2 * j + 1); i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}