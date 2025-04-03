#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int enterNumber, i, j=0, k=0;
	int mainArray[100];
	int oddArray[100];
	int evenArray[100];

	printf("How many unit of array enter:  ");
	scanf("%d",&enterNumber);

	printf("Please enter the units: ");

	for (i = 0; i < enterNumber; i++)
		scanf("%d", &mainArray[i]);

	for (i = 0; i < enterNumber; i++)
	{
		if (mainArray[i] % 2 == 0)
		{
			evenArray[j] = mainArray[i];
			j++;
		}
		else
		{
			oddArray[k] = mainArray[i];
			k++;
		}
	}
	printf("Even numbers: ");
	for (i = 0; i < j; i++)
		printf("%d ", evenArray[i]);

	printf("\nOdd numbers: ");
	for (i = 0; i < k; i++)
		printf("%d ", oddArray[i]);

	printf("\n\n");
	return 0;
}