#include <stdio.h>
//�Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּҰ��� �ε���
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
//�Լ� : swapElement()
//�Է� : �迭, �� ���� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� ��Ұ� �ٲ��.
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
//�Լ� : selectionSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�
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