#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number, division;

	printf("Please enter a number: ");
	scanf("%d", &number);

	division = number % 2;

	if (division == 1)
	{
		printf("\n%d is single.\n\n", number);
	}
	else
	{
		printf("\n%d is double.\n\n", number);
	}

	return 0;
}