#include<stdio.h>
#include<limits.h>
int main(void) {
	int n, biggest=INT_MIN;
	while(1) {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (biggest < n)
			biggest = n;
		if (n == 0) 
			break;
	}
	printf("%d\n", biggest);
	return 0;
}