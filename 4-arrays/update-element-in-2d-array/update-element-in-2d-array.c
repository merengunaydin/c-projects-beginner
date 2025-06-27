#include <stdio.h>

int main()
{
	int matrix[2][3] = { {2, 4, 6}, {3, 5, 7} };
	int i, j;

	matrix[1][1] = 21;

	printf("Updated 2x3 matrix:\n\n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", matrix[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}
