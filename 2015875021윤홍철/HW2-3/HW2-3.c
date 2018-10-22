#include <stdio.h>
int main(void) {
	int i = 1, sum = 0;
	while (i <= 100) {
		if (i % 3 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}