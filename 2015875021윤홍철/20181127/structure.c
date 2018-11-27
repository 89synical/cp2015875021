#include <stdio.h>
//����ü ����
struct complex {
	double real;//��� ����(member variable)
	double imag;//��(ditto)
};//����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.
typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.
//������ Ÿ���� ���� ����
typedef int myIntType; //�ڷ��� "int"�� ������ "myIntType"��� �θ��ڴ�.
//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
void printComplex(Complex* ptr) {
	printf("%f + j%f\n", ptr->real, ptr->imag);
}
//�Լ� conjugate()
//�Է� : ���Ҽ� (������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToConjugate(Complex *ptr) {
	//����ο� -1�� ���Ѵ�.
	ptr->imag = -(ptr->imag);
}
//�Լ� returnConjugate()
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex returnConjugate(Complex* ptr) {
	Complex temp;
	temp.real = ptr->real;
	temp.imag = -1 * ptr->imag;
	return temp;
}
int main() {
	myIntType count = 10;//==> int count = 10;
	//����ü ���� ����
	Complex a, b;//==> struct complex a;
	a.real = 10;//����ü ������ ��� ���� ���� ��� ==> ����ü ���� �̸�, ��� ���� �̸�
	a.imag = 20;
	printComplex(&a);
	convertToConjugate(&a); 
	printComplex(&a);
	b = returnConjugate(&a); printComplex(&b);
	convertToConjugate(&a); printComplex(&a);
	//����ü ������ ���� ����
	Complex* ptr;
	ptr = &a;
	ptr->real = 100;
	ptr->imag = 200;
	printComplex(ptr);
	return 0;
}