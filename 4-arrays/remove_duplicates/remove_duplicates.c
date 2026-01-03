#include <stdio.h>

void filter(int[], int);

int main()
{
	int array[9] = { 1, 120, 4, 6, 12, 25, 6, 6, 120 };
	int i;

	filter(array, 9);

	for (i = 0; i < 9; i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}

void filter(int array[], int elementCount)
{
	int i, j, temp;

	for (i = 0; i < elementCount; i++)
	{
		if (array[i] == -1)
			continue;
		for (j = 0; j < elementCount; j++)
		{
			temp = array[i];
			if (temp == array[j] && i != j)
			{
				array[i] = -1;
				array[j] = -1;
			}
		}
	}
}