#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int score;
	struct node* pNext;
} Node;
typedef struct linkedlist {
	Node* pHead;
	Node* pTail;
	int nNode;
} LinkedList;
//�Լ� printLL()
//�Է� : ���Ḯ��Ʈ
//��� : ����
//�μ�ȿ�� : �� ���Ḯ��Ʈ�� ������ ������� ���
void printLL(LinkedList* pList) {
	Node* ptr = pList->pHead;
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
//�Լ� createNode()
//�Է� : ����
//��� : ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�. �� �� score=�Է�, pNext = NULL�� �Ѵ�.
//�μ�ȿ�� : ����
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//�Լ� addHead()
//�Է� : ���Ḯ��Ʈ, �� ���
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(LinkedList* pList, Node* pNewNode) {
	if (pList->pHead == NULL)
		pList->pTail = pNewNode;
	pNewNode->pNext = pList->pHead;
	pList->pHead = pNewNode;
	(pList->nNode)++;
}
//�Լ� returnTail()
//�Է� : ���Ḯ��Ʈ(�� ����� ������)
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node* ptr) {
	if (ptr == NULL)
		return NULL;
	while (ptr != NULL) {
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}
//�Լ� addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL) {
		printf("error can't add a tail to empty linked list \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}
int main() {
	LinkedList *pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));
	printLL(pList);
	return 0;
}