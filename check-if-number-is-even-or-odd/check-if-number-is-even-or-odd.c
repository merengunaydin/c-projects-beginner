#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number % 2 == 1)
	{
		printf("\n%d is an odd number.\n\n", number);
	}
	else
	{
		printf("\n%d is an even number.\n\n", number);
	}

	return 0;
}
