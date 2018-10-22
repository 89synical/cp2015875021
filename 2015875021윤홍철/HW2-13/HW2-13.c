#include <stdio.h>
int main(void) {
	int month, day;
	printf("ø˘ : ");
	scanf_s("%d", &month);
	printf("¿œ : ");
	scanf_s("%d", &day);
	switch (month)
	{
	case 1:
		month = 0;
		break;
	case 2:
		month = 31;
		break;
	case 3:
		month = 59;
		break;
	case 4:
		month = 90;
		break;
	case 5:
		month = 120;
		break;
	case 6:
		month = 151;
		break;
	case 7:
		month = 181;
		break;
	case 8:
		month = 212;
		break;
	case 9:
		month = 243;
		break;
	case 10:
		month = 273;
		break;
	case 11:
		month = 304;
		break;
	case 12:
		month = 334;
		break;
	}
	printf("%d¿œ\n", month + day);
	return 0;
}