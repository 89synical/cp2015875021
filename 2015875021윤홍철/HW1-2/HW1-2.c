#include <stdio.h>
int main(void) {
	int a;
	printf("Á¤¼ö ÀÔ·Â : ");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("Â¦¼ö");
	else
		printf("È¦¼ö");
}
