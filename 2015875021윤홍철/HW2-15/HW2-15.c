#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int answer, i, guess;
	answer = rand() % 100 + 1;
	for (i = 0; i < 10; i++) {
		printf("숫자를 입력하시오: ");
		scanf_s("%d", &guess);
		if (answer == guess) {
			printf("정답입니다!\n");
			break;
		}
		else if (answer > guess) {
			printf("입력하신 숫자보다 큽니다.\n");
		}
		else
			printf("입력하신 숫자보다 작습니다.\n");
	}
	if (i == 10) {
		printf("Game Over...GG Noob\n");
	}
}