#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void siralama();

int array[7];
int i;

int main()
{
	printf("Please seven numbers: ");

	for (i = 0; i < 7; i++)
	{
		scanf("%d",&array[i]);
	}

	siralama();

	return 0;
}

void siralama()
{
	int yedek, j;
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 7; j++)
		{
			if (array[j] < array[i])
			{
				yedek = array[i];
				array[i] = array[j];
				array[j] = yedek;
			}
		}
	}

	for (i = 0; i < 7; i++)
		printf("%d ", array[i]);
}