#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, array1[7], array2[7];

	printf("Enter seven numbers: ");

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &array1[i]);
	}

	for (i = 0; i < 7; i++)
	{
		array2[i] = array1[6 - i];
	}

	for (i = 0; i < 7; i++)
	{
		printf("%d ", array2[i]);
	}

	return 0;
}