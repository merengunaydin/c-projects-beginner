#include <stdio.h>

int main()
{
	float number1, number2;
	float addition, subtraction, multiplication, division;

	number1 = 25;
	number2 = 10;

	addition = number1 + number2;
	subtraction = number1 - number2;
	multiplication = number1 * number2;
	division = number1 / number2;

	// %.2f is used to display two digits after the decimal point
	printf("Addition: %.2f\n", addition);
	printf("Subtraction: %.2f\n", subtraction);
	printf("Multiplication: %.2f\n", multiplication);
	printf("Division: %.2f\n", division);

	return 0;
}
