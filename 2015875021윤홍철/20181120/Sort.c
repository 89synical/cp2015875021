#include <stdio.h>
void swapElement(int *arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
 void insertElement(int *arr, int ele) {
	while (ele > 0) {
		if (arr[ele - 1] > arr[ele])
			swapElement(arr, ele - 1, ele);
		else
			break;
		ele--;
	}
} 
/* void insertElement(int *arr, int ele) {
	int i, key = arr[ele];
	for (i = ele - 1; i >= 0 && arr[i] > key; i--)
		arr[i + 1] = arr[i];
	arr[i + 1] = key;
} */
void insertionSort(int *arr, int len) {
	int i;
	for (i = 1; i < len; i++) {
		insertElement(arr, i);
	}
}
void printArray(int *arr, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main() {
	int a[] = { 30, 35, 27, 15, 40 };
	insertionSort(a, 5);
	printArray(a, 5);
	return 0;
}