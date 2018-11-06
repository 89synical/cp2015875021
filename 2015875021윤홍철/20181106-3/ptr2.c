#include<stdio.h>
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int a = 10, b = 20;
	//swap: 변수 a,b의 값을 바꾼다.
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}