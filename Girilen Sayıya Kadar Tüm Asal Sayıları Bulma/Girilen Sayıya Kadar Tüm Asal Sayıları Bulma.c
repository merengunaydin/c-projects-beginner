#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count, flag = 0, enterNumber, div; // flag = 0 -> a prime number
	char c;


	
		do {
			printf("-----------------------------------");
			printf("\nPlease enter a number: ");
			scanf("%d", &enterNumber);

			if (enterNumber == 0)
			{
				do {
					printf("Please enter a correct number(2<=x): ");
					scanf("%d", &enterNumber);
				} while (enterNumber == 0);
			}

			if (enterNumber < 2)
			{
				do {
					printf("Please enter a correct number(2<=x): ");
					scanf("%d", &enterNumber);
				} while (enterNumber < 2);
			}
		
			printf("Result: ");

			for (count = 2; count <= enterNumber; count++)
			{
				flag = 0;

				for (div = 2; div <= count / 2; div++)
				{
					if (count % div == 0)
					{
						flag = 1; // flag = 1 -> not a prime number
					}
				}
				if (flag == 0)
				{
					printf("%2d, ", count);
				}
			}

			
				printf("\n\nDo you want to enter another value(y/n): ");
				scanf(" %c", &c);

				if (c != 'y' && c != 'Y' && c != 'n' && c != 'N' )
				{
					do {
						printf("Please enter a correct character: ");
						scanf(" %c", &c);
					} while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
				}

		} while ( c == 'y' || c == 'Y');


	printf("\n\n");
	return 0;
}