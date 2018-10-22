#include <stdio.h>
int main(void) {
	int i = 1, sum = 0;
	do {
		if (i % 3 == 0)
			sum += i;
		i++;
	} while (i <= 100);
	printf("%d\n", sum);
	return 0;
}