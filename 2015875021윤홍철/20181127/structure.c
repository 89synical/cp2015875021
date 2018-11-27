#include <stdio.h>
//구조체 선언
struct complex {
	double real;//멤버 변수(member variable)
	double imag;//상동(ditto)
};//구조체 선언은 반드시 세미콜론으로 끝내야 한다.
typedef struct complex Complex; //자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.
//데이터 타입의 별명 선언
typedef int myIntType; //자료형 "int"를 앞으로 "myIntType"라고도 부르겠다.
//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
void printComplex(Complex* ptr) {
	printf("%f + j%f\n", ptr->real, ptr->imag);
}
//함수 conjugate()
//입력 : 복소수 (포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
void convertToConjugate(Complex *ptr) {
	//허수부에 -1을 곱한다.
	ptr->imag = -(ptr->imag);
}
//함수 returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음
Complex returnConjugate(Complex* ptr) {
	Complex temp;
	temp.real = ptr->real;
	temp.imag = -1 * ptr->imag;
	return temp;
}
int main() {
	myIntType count = 10;//==> int count = 10;
	//구조체 변수 선언
	Complex a, b;//==> struct complex a;
	a.real = 10;//구조체 변수의 멤버 변수 접근 방법 ==> 구조체 변수 이름, 멤버 변수 이름
	a.imag = 20;
	printComplex(&a);
	convertToConjugate(&a); 
	printComplex(&a);
	b = returnConjugate(&a); printComplex(&b);
	convertToConjugate(&a); printComplex(&a);
	//구조체 포인터 변수 선언
	Complex* ptr;
	ptr = &a;
	ptr->real = 100;
	ptr->imag = 200;
	printComplex(ptr);
	return 0;
}