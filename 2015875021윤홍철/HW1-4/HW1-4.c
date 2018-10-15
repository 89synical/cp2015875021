#include <stdio.h>
int main(void) {
	int a;
	printf("점수 입력 : ");
	scanf_s("%d", &a);
	if (a < 80)
	{
		if (a < 60)
		{
			if (a < 40)
			{
				if (a < 20)
					printf("E");
				else
					printf("D");
			}
			else
				printf("C");
		}
		else
			printf("B");
	}
	else
		printf("A");
}
