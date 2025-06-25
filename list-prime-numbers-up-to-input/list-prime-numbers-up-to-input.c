#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number, count, div, flag;
	char choice;

	do {
		printf("-----------------------------------\n");
		printf("Please enter a number (>= 2): ");
		scanf("%d", &number);

		while (number < 2) {
			printf("Invalid input. Please enter a number (>= 2): ");
			scanf("%d", &number);
		}

		printf("Prime numbers up to %d: ", number);
		for (count = 2; count <= number; count++)
		{
			flag = 0;
			for (div = 2; div <= count / 2; div++)
			{
				if (count % div == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				printf("%d ", count);
			}
		}

		printf("\n\nDo you want to enter another value (y/n): ");
		scanf(" %c", &choice);

		while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
			printf("Please enter a valid choice (y/n): ");
			scanf(" %c", &choice);
		}

	} while (choice == 'y' || choice == 'Y');

	printf("\nProgram terminated.\n");
	return 0;
}
