#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[6];
	int i, j;

	printf("Enter 6 numbers: ");
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("\nNUMBERS AND THEIR HISTOGRAMS:\n");

	for (i = 0; i < 6; i++)
	{
		printf("%2d: ", array[i]);
		for (j = 0; j < array[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
