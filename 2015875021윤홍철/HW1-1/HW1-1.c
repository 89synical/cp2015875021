#include <stdio.h>
int main(void) {
	int a, b;
	printf("정수 입력 : ");
	scanf_s("%d %d", &a, &b);
	if (a == b)
		printf("a와 b가 같다.");
	else if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
}
