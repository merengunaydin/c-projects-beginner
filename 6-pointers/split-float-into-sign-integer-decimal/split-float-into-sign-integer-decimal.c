#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void splitFloat(float, char*, int*, float*);

int main()
{
	float number, decimalPart;
	int integerPart;
	char sign;

	printf("Enter a floating-point number: ");
	scanf("%f", &number);

	splitFloat(number, &sign, &integerPart, &decimalPart);

	printf("Analysis of %f:\n", number);
	printf("Sign: %c\n", sign);
	printf("Integer part: %d\n", integerPart);
	printf("Decimal part: %f\n", decimalPart);

	return 0;
}

void splitFloat(float number, char* signPtr, int* intPtr, float* decPtr)
{
	if (number < 0)
	{
		*signPtr = '-';
	}
	else
	{
		*signPtr = '+';
	}

	*intPtr = (int)number;
	*decPtr = number - *intPtr;

	if (*intPtr < 0)
		*intPtr = -*intPtr;
}
