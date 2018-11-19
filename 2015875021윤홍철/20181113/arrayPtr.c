#include <stdio.h>
//함수 : findMinIndex()
//입력 : 배열(배열이름, 배열길이)
//출력 : 최소값의 인덱스
int findMinIndex(int *arr, int len) {
	int minIndex = 0, i, min = arr[0];
	for (i = 1; i < len; i++) {
		if (min > arr[i]) {
			minIndex = i;
			min = arr[i];
		}
	}
	return minIndex;
}
//함수 : swapElement()
//입력 : 배열, 두 개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 요소가 바뀐다.
void swapElement(int *arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int findMin(int *arr, int len) {
	int i, min = arr[0];
	for (i = 1; i < len; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
void printArray(int *arr, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
		printf("\n");
}
//함수 : selectionSort()
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬됨
void selectionSort(int* arr, int len) {
	int i, j;
	for (i = 0; i < len; i++) {
		j = findMinIndex(arr + i, len - i);
		swapElement(arr + i, 0, j);
	}
}
int main() {
	int a[] = { 30, 35, 27, 15, 40 };
	printf("minimum value of the array is %d\n",findMin(a, 5));
	printf("The index of the minimum value is %d\n", findMinIndex(a, 5));
	//swapElement(a, 0, 3);
	selectionSort(a, 5);
	printArray(a, 5);
	return 0;
}