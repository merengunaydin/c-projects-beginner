#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void searchInArray(int, int*, int*, int*, int[N][N]);

int main()
{
	int target, randomNumber, i, j, row, column, found;
	int arr[N][N];

	printf("Enter a number to search in the array: ");
	scanf("%d", &target);

	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			randomNumber = rand() % 10;
			arr[i][j] = randomNumber;
		}
	}

	searchInArray(target, &found, &row, &column, arr);

	printf("The entered number ");
	if (found == 1)
	{
		printf("was found in the array.\n");
		printf("It is located at row %d, column %d.\n", row, column);
	}
	else
	{
		printf("was not found in the array.\n");
	}

	return 0;
}

void searchInArray(int target, int* foundPtr, int* rowPtr, int* columnPtr, int arr[N][N])
{
	int i, j;
	*foundPtr = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (target == arr[i][j])
			{
				*foundPtr = 1;
				*rowPtr = i;
				*columnPtr = j;
			}
		}
	}
}
