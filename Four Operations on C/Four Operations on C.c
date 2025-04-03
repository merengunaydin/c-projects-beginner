#include <stdio.h>

int main()
{
	float number1, number2, addition, subtraction, multiplication, division;

	number1 = 25;
	number2 = 10;

	addition = number1 + number2;
	subtraction = number1 - number2;
	multiplication = number1 * number2;
	division = number1 / number2;

	printf("Addition: %.2f \n", addition);	// %.2f kalıbını sadece virgülden sonraki iki basamağı göstermesi için koyuyoruz.
	printf("Subtraction: %.2f \n", subtraction);
	printf("Multiplication: %.2f \n", multiplication);
	printf("Division: %.2f \n", division);

	return 0;
}