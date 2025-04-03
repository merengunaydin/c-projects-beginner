#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void countCha(char x[], int y[]);

int main()
{
	char x[100];
	int y[26], i=0;

	printf("Emter a sentence: ");
	do {
		scanf("%c", &x[i]);
		i++;
	} while (x[i - 1] != '.');

	countCha(x, y);

	for (i = 0; i < 26; i++)
	{
		printf("%c / %c = %d\n", 'A' + i, 'a' + i, y[i]);
	}

	return 0;
}

void countCha(char x[], int y[])
{
	int i, j, k;

	for (j = 0; j < 26; j++)
	{
		k = 0;
		for (i = 0; i < 100; i++)
		{
			if ('A' + j == x[i] || 'a' + j == x[i])
				k++;
		}
		y[j] = k;
	}
}
