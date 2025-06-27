#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number > 0)
	{
		printf("\nThe number is positive.\n\n");
	}
	else if (number < 0)
	{
		printf("\nThe number is negative.\n\n");
	}
	else
	{
		printf("\nThe number is zero.\n\n");
	}

	return 0;
}
