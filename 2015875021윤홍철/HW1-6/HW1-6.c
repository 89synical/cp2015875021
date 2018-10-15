#include <stdio.h>
int main(void) {
	int a = 0, b, c;
	printf("두 자리 정수 입력 : ");
	scanf_s("%d", &a);
	b = a % 10;
	c = (b * 10) + ((a - (a % 10)) / 10);
	printf("%d", c);
}
