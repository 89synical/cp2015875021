#include <stdio.h>
int main(void) {
	int i, sum = 0, num[10];
	printf("정수 입력 : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
	for (i = 0; i < 10; i++) {
		sum += num[i];
	}
	printf("%d\n", sum);
	return 0;
}