#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	int ones, tens, hundreds, thousands, tenThousands;

	printf("Enter a 5-digit number: ");
	scanf("%d", &number);

	printf("------------------\n");

	ones = number % 10;
	tens = (number % 100 - ones) / 10;
	hundreds = (number % 1000 - number % 100) / 100;
	thousands = (number % 10000 - number % 1000) / 1000;
	tenThousands = (number - number % 10000) / 10000;

	printf("Ones: %d\n", ones);
	printf("Tens: %d\n", tens);
	printf("Hundreds: %d\n", hundreds);
	printf("Thousands: %d\n", thousands);
	printf("Ten-thousands: %d\n", tenThousands);

	return 0;
}
