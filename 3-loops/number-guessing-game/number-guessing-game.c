#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guess, secretNumber;

	srand(time(NULL));
	secretNumber = rand() % 10 + 1;

	do
	{
		printf("Enter a number between 1 and 10: ");
		scanf("%d", &guess);

		if (guess == secretNumber)
		{
			printf("Correct! You guessed the number.\n");
			break;
		}
		else
		{
			printf("Incorrect, try again.\n");
		}

	} while (guess != secretNumber);

	return 0;
}
