#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, j = 0, k = 0;
	int mainArray[100];
	int oddArray[100];
	int evenArray[100];

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &mainArray[i]);

	for (i = 0; i < n; i++)
	{
		if (mainArray[i] % 2 == 0)
		{
			evenArray[j++] = mainArray[i];
		}
		else
		{
			oddArray[k++] = mainArray[i];
		}
	}

	printf("Even numbers: ");
	for (i = 0; i < j; i++)
		printf("%d ", evenArray[i]);

	printf("\nOdd numbers: ");
	for (i = 0; i < k; i++)
		printf("%d ", oddArray[i]);

	printf("\n");
	return 0;
}
