#include<stdio.h>
int main() {
	// ctrl-k, ctrl-f:Format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
	// ctrl-]: matching parentheses
	//ctrl-k,ctrl-c: ������ ������ Comment out
	//ctrl-k,ctrl-u: undo comment out
	// �� ���� ��а� ����
	int sum = 0, i = 1;
	int count = 1;
	while (count <= 10)
		printf("count=%d\n", count++);
	//1�������� 100���� 3�� ����� ȭ�鿡 ���
	count = 1;
	while (count <= 100) {
		if (count % 3 == 0)
			printf("count=%d\n", count);
		count++;
	}
	//1�������� 100���� 3�� ����� ������ ������ ȭ�鿡 ���
	count = 1;
	while (count <= 100) {
		if (count % 3 != 0)
			printf("count=%d\n", count);
		count++;
	}
	//Ű���忡�� ������ ��� �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�.
	int input;
	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		if (input == 100)
			break;
		if (input > 100) {
			printf("�Է��� ������ 100���� Ů�ϴ�. �ٽ� �Է����ּ���\n");
			continue;
		}
		if (input % 3 == 0)
			printf("�Է��� ���� %d�� 3�� ����Դϴ�.\n", input);
		else
			printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n", input);
	}
	//1���� 100���� ������ ���� ���Ͻÿ�.
	while (i <= 100) {
		sum+= i++;
	}
	printf("%d\n", sum);
	printf("Program End\n");
	// �� �Ʒ��� ��а� ����
	return 0;
}