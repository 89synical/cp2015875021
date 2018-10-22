#include <stdio.h>
int main(void) {
	int n, i;
	for (n = 2; n <= 100; n++) {
		for (i = 2; i < n; i++) {
			if (n%i == 0)
				break;
		}
		if (n == i) {
			printf("%d\n", n);
		}
	}
	return 0;
}