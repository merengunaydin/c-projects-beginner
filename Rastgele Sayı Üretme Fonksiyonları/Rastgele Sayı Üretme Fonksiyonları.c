#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int enterNumber, pNumber;

	

	srand(time(NULL));
	pNumber = rand() % 10 + 1;

	do
	{
		printf("Please enter a number on 1-10: ");
		scanf("%d", &enterNumber);

		if (enterNumber == pNumber)
		{
			printf("You are correct!\n\n");
			break;
		}
		else
			printf("You are wrong!\n\n");

	} while (enterNumber != pNumber);



	

	return 0;
}