#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  A program that adds up the digits in the digits of a 4-digit number entered by the user.  */

int main()
{
	int number1, ThD, HD, TeD, UD, totalDigit;

	printf("Please enter a 4-digit number: ");
	scanf("%d", &number1);
	printf("\n");

	UD = number1 % 10;
	TeD = (number1 % 100 - (number1 % 10)) / 10;
	HD = (number1 % 1000 - (number1 % 100)) / 100;
	ThD = (number1 % 10000 - (number1 % 1000)) / 1000;
	totalDigit = UD + TeD + HD + ThD;

	printf("-----------------------------\n\n");

	printf("Units Digit: %d\n", UD);
	printf("Tens Digit: %d\n", TeD);
	printf("Hundreds Digit: %d\n", HD);
	printf("Thousands Digit: %d\n\n", ThD);

	printf("-----------------------------\n\n");

	printf("Sum of all digits: %d\n\n\n", totalDigit);

	return 0;
}