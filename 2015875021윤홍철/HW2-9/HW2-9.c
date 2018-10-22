#include <stdio.h>
int main(void) {
	int n, i;
	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (n < 1 || n > 9) {
			printf("1~9 사이의 정수를 입력해주세요.\n");
		}
	} while (n < 1 || n > 9);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d \n", n, i, n*i);
	return 0;
}