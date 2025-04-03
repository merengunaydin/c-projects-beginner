#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int enterNumber, count1, count2, count3;

	printf("How many lines does a triangle have: ");
	scanf("%d",&enterNumber);

	for (count1 = 1; count1 <= enterNumber; count1++)
	{
		for (count2 = 1; count2 <= count1; count2++)
		{
			printf("#");
		}
		printf("\n");
	}

	for (enterNumber - 1; enterNumber > 0; enterNumber--)
	{
		for (count3 = 1; count3 < enterNumber; count3++)
		{
			printf("#");
		}
		printf("\n");
	}

	return 0;
}