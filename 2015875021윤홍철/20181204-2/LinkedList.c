#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//함수 printLL()
//입력 : 연결리스트
//출력 : 없음
//부수효과 : 각 연결리스트의 성적을 순서대로 출력
void printLL(Node* ptr) {
	while (ptr != NULL) {
		printf("score=%d\n", ptr->score);
		ptr = ptr->pNext;
	}
}
double averageLL(Node* ptr) {
	int sum = 0, count = 0;
	double average;
	while (ptr != NULL) {
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;
	}
	return (double)sum / count;
}
//함수 createNode()
//입력 : 성적
//출력 : 노드하나를 동적할당으로 생성하여 포인터를 반환한다. 이 때 score=입력, pNext = NULL로 한다.
//부수효과 : 없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//함수 addHead()
//입력 : 연결리스트, 새 노드
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode) {
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}
//함수 returnTail()
//입력 : 연결리스트(의 헤드노드 포인터)
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node* ptr) {
	if (ptr == NULL)
		return NULL;
	while (ptr != NULL) {
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}
//함수 addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨
void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL){
		printf("error can't add a tail to empty linked list \n");
	return;
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}
int main() {
	Node* pHead = NULL, *ptr;//헤드노드의 포인터, NULL이면 연결리스트가 없다는 의미(로 약속하자)
//	Node a, b;
//	a.score = '10';
//	b.score = '20';
//	a.pNext = &b;
//	b.pNext = NULL;
//	pHead = &a;
	pHead = createNode(11);
	ptr = createNode(20);
//	addHead(&pHead, ptr);
	addTail(pHead, ptr);
	printLL(pHead);
//	double test = 10 / 4; // 1. (10/4)->2를 반환, 2. 정수형 2를 double형 2.0으로 변환
//	printf("test = %f\n", test);
//	test = 10.0 / 4; //(10.0/4)->2.5를 반환
//	printf("test = %f\n", test);
//	test = ((double)10) / 4;//1.정수형(int) 10을 실수형(double) 10.0으로 변환
//	printf("test = %f\n", test);
	return 0;
}