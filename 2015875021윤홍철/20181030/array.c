#include <stdio.h>
//함수 printArray
void printArray(int arr[], int length) {
	int count = 0;
	while (count < length) {
		printf("arr[%d]=%d\n", count, arr[count]);
		count++;
	}
}
int main(void) {
	//int a[4];
	//배열 선언
	//1. 배열의 이름 : a
	//2. 배열의 자료형 : int
	//3. 배열의 길이 : 4
	int len = 4;
	int count = 0;
	int a[4] = { 2,20,200,2000 };
	int arr[] = { 3,30,300 };
	while (count < len) {
		printf("a[%d]=%d\n", count, a[count]);
		count++;
	}
	printArray(arr, 3);
	//배열을 매개변수로 함수에 던지는 방법
	return 0;
}