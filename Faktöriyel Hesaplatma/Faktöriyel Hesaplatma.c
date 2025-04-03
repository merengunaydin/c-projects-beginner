#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count, enterNumber;
	double sum = 1;

	printf("Please enter a number for factorial: ");
	scanf("%d", &enterNumber);

	for (count = 1; count <= enterNumber; count++)
	{
		sum = sum * count;
		printf("%d %20.f\n",count, sum);
	}

	return 0;
}