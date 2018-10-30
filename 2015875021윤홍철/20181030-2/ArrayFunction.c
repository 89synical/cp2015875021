#include<stdio.h>
//함수 printnumber()
//입력 : 두 정수
//출력 : 없음
//부수효과 : 없음
void printNumber(int a, int b) {
	int count = a;
	while (count <= b) {
		printf("%d\n", count++);
	}
}
//함수이름 : addArray()
//입력 : 배열
//출력 : 배열 각 요소들의 합
//부수효과 : 없음
int addArray(int a[], int length) {
	int sum = 0, i;
	for (i = 0; i < length; i++) {
		sum += a[i];
	}
	return sum;
}
int main(void) {
	int a = 3, b = 50;
	int arr[4] = { 10,20,30,40 };
	int length = 4, i, sum = 0;
	printNumber(-20, 100);
	sum=addArray(arr[4], 4);
	printf("%d", sum);
	return 0;
}