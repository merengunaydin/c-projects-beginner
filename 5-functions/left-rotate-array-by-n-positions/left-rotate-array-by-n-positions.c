#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void rotateLeft(int array[], int rotationCount);

int main()
{
	int array[SIZE];
	int i, rotationCount;

	printf("Enter %d elements of the array: ", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Enter number of positions to rotate left: ");
	scanf("%d", &rotationCount);

	printf("-----------------------------\n");

	rotateLeft(array, rotationCount);

	printf("Rotated array:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}

void rotateLeft(int array[], int rotationCount)
{
	int i, j, temp;

	for (i = 0; i < rotationCount; i++)
	{
		temp = array[0];
		for (j = 0; j < SIZE - 1; j++)
		{
			array[j] = array[j + 1];
		}
		array[SIZE - 1] = temp;
	}
}
