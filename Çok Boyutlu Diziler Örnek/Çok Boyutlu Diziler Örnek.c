#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[4][6];
	int i, j, sum;

	for (i = 0; i < 4; i++)
	{
		printf("%d . satir: ", i);
		for (j = 0; j < 6; j++)
		{
			scanf("%d", & array[i][j]);
		}
	}
	
	printf("           ------------\n");
	printf("           ");

	for (i = 0; i < 6; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum = sum + array[j][i];
		}
		printf("%d ", sum);
	}


	return 0;
}