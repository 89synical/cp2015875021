#include<stdio.h>
int main(void) {
	int i;
	for (i = 0; i < 24; i++) {
		if (i % 6 != 0 || i == 0)
			printf("*");
		else
			printf(" ");
		if ((i + 1) % 8 == 0)
			printf("\n");
	}
	return 0;
}