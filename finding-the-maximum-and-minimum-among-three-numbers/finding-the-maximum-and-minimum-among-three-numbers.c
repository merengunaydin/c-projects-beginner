#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number1, number2, number3;

	printf("Please enter three number: ");
	scanf("%d%d%d", &number1, &number2, &number3);
	
	if (number1 >= number2 && number1 >= number3)
	{
		printf("\nBiggest number is %d\n\n", number1);
	}
	else if (number2 >= number1 && number2 >= number3)
	{
		printf("\nBiggest number is %d\n\n", number2);
	}
	else
	{
		printf("\nBiggest number is %d\n\n", number3);
	}

	return 0;
}