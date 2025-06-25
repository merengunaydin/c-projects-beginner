#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[10];
	int i;
	float average = 0.0;

	printf("Enter 10 integers:\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 10; i++)
	{
		average += array[i];
	}

	average /= 10;

	printf("Average of the array: %.1f\n", average);

	printf("Numbers below the average: ");
	for (i = 0; i < 10; i++)
	{
		if (array[i] < average)
			printf("%d ", array[i]);
	}

	printf("\n");
	return 0;
}
