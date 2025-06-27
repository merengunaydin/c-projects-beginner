#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char type;
	int km, day;
	int price;

	printf("Car Types\n");
	printf("(A or a) SUV\n");
	printf("(B or b) Sedan\n");
	printf("(P or p) Sports\n");

	printf("---------------------\n");

	printf("Enter car type: ");
	scanf(" %c", &type);  // Note the space before %c to consume newline
	printf("How many days did you rent the car? ");
	scanf("%d", &day);
	printf("How many kilometers did you drive? ");
	scanf("%d", &km);

	printf("----------------------\n");

	if (day <= 0 || km <= 0)
	{
		printf("Invalid number of days or kilometers.\n\n");
		return 1;
	}
	else
	{
		switch (type)
		{
		case 'A':
		case 'a':
			price = 20 * day + 18 * km;
			break;
		case 'B':
		case 'b':
			price = 32 * day + 22 * km;
			break;
		case 'P':
		case 'p':
			price = 51 * day + 36 * km;
			break;
		default:
			printf("Invalid car type entered.\n\n");
			return 1;
		}
	}

	printf("Total cost: %d$\n\n", price);

	return 0;
}
