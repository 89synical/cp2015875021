#include<stdio.h>
//�Լ� printnumber()
//�Է� : �� ����
//��� : ����
//�μ�ȿ�� : ����
void printNumber(int a, int b) {
	int count = a;
	while (count <= b) {
		printf("%d\n", count++);
	}
}
//�Լ��̸� : addArray()
//�Է� : �迭
//��� : �迭 �� ��ҵ��� ��
//�μ�ȿ�� : ����
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