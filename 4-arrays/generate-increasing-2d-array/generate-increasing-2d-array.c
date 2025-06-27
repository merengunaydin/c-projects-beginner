#include <stdio.h>

int main()
{
	int array[3][4];
	int i, j, k = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			array[i][j] = k;
			k++;
		}
	}

	printf("Generated 3x4 matrix:\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}
