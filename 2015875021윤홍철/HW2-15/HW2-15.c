#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int answer, i, guess;
	answer = rand() % 100 + 1;
	for (i = 0; i < 10; i++) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf_s("%d", &guess);
		if (answer == guess) {
			printf("�����Դϴ�!\n");
			break;
		}
		else if (answer > guess) {
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�.\n");
		}
		else
			printf("�Է��Ͻ� ���ں��� �۽��ϴ�.\n");
	}
	if (i == 10) {
		printf("Game Over...GG Noob\n");
	}
}