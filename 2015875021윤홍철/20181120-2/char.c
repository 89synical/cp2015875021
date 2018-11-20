#include <stdio.h>
#include <string.h>
void printArray(char *arr, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%c", arr[i]);
	printf("\n");
}
int main() {
	char c; //character(¹®ÀÚ)Çü
	c = 'A'; // ==> c=65;
	printf("c=%d\n", c);
	printf("c=%c\n", c);
	char a[] = {'h', 'e',  'l',  'l', 'o'};
	printArray(a, 5);
	char b[] = "hello";
	printf("%s\n", b);

	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str1);
	return 0;
}