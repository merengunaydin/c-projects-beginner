#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int);

int main()
{
	int enterNumber, result;

	printf("Which number should be calculated to factorial: ");
	scanf("%d", &enterNumber);

	result = factorial(enterNumber);

	printf("Result is: %d", result);

	return 0;
}

int factorial(int x)
{
	int resultFonk=1;

	if (x > 1)
	{
		resultFonk = x * factorial(x - 1);
	}

	return resultFonk;
}