#include<stdio.h>
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int a = 10, b = 20;
	//swap: ���� a,b�� ���� �ٲ۴�.
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}