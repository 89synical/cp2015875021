#include <stdio.h>
int gVar = 100; //��������(global variable) gVar
//�Լ� sum()
//�Է� : �� ����
//��� : �� ������ ��
//�μ�ȿ�� : ����
int sum(int a, int b) { //�Լ� ����
	int c = a + b; a = 100;	
	return c; //�Լ� ��ü
}
//�Լ� : goodPrint
//�Է� : ����
//��� : ����
//�μ�ȿ�� : ȭ�鿡 good ���
void goodPrint(void) {
	printf("good\n");
}
//�Լ� ����, �Լ� �̸�(sum), �Ű������� ����(2��), �� �Ű������� �ڷ���(int), ��ȯ���� �ڷ���(int)
//�Լ� ȣ���ϱ� ���� �ʿ��� ����
int main(void) {
	int x = 10, y = 20, z;
	z= sum(10, 20); //�Լ� ȣ��
	printf("z = %d\n", z);
	goodPrint();
	return 0;
}