#include <stdio.h>
//�Լ� printArray
void printArray(int arr[], int length) {
	int count = 0;
	while (count < length) {
		printf("arr[%d]=%d\n", count, arr[count]);
		count++;
	}
}
int main(void) {
	//int a[4];
	//�迭 ����
	//1. �迭�� �̸� : a
	//2. �迭�� �ڷ��� : int
	//3. �迭�� ���� : 4
	int len = 4;
	int count = 0;
	int a[4] = { 2,20,200,2000 };
	int arr[] = { 3,30,300 };
	while (count < len) {
		printf("a[%d]=%d\n", count, a[count]);
		count++;
	}
	printArray(arr, 3);
	//�迭�� �Ű������� �Լ��� ������ ���
	return 0;
}