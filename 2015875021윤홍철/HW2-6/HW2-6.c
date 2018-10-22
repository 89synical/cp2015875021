#include <stdio.h>
int main(void) {
	int n;
	do {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("에러 : 양의 정수를 입력해주세요.\n");
		}
	} while (n <= 0);
	printf("%d\n", 2*n);
	return 0;
}