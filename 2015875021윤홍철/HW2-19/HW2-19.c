#include <stdio.h>
int main(void) {
	int n, i;
	printf("���� �Է� : ");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++) {
		if (n%i == 0)
			break;
	}
	if (n == i) 
		printf("���� %d�� �Ҽ��Դϴ�.\n", n);
	else 
		printf("���� %d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}