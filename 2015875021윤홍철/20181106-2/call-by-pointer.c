#include <stdio.h>
void test(int a) {
	a = 100;
}
void testPointer(int *ptr) {
	*ptr = 100;
}
int main(void) {
	int a = 10;
	test(a);
	testPointer(&a);
	printf("a=%d\n", a);

	return 0;
}