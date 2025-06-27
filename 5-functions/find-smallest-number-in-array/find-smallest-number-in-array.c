#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMin(int array[]);

int main()
{
	int array[10];
	int i;

	printf("Enter 10 integers:\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The smallest number in the array is: %d\n", findMin(array));

	return 0;
}

int findMin(int array[])
{
	int min = array[0];
	int i;

	for (i = 1; i < 10; i++)
	{
		if (array[i] < min)
			min = array[i];
	}

	return min;
}
