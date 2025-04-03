#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number1;

	printf("Please enter a number: ");
	scanf("%d", &number1);

	if (number1 > 0)
	{
		printf("\nIt is positive.\n\n");
	}
	else if (number1 <0)
	{
		printf("\nIt is negative.\n\n");
	}
	else
	{
		printf("\nIt is zero.\n\n");
	}

	return 0;

}
