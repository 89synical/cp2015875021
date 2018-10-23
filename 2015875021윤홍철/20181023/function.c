#include <stdio.h>
int gVar = 100; //전역변수(global variable) gVar
//함수 sum()
//입력 : 두 정수
//출력 : 두 정수의 합
//부수효과 : 없음
int sum(int a, int b) { //함수 선언
	int c = a + b; a = 100;	
	return c; //함수 본체
}
//함수 : goodPrint
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint(void) {
	printf("good\n");
}
//함수 정의, 함수 이름(sum), 매개변수의 갯수(2개), 각 매개변수의 자료형(int), 반환값의 자료형(int)
//함수 호출하기 위해 필요한 정보
int main(void) {
	int x = 10, y = 20, z;
	z= sum(10, 20); //함수 호출
	printf("z = %d\n", z);
	goodPrint();
	return 0;
}