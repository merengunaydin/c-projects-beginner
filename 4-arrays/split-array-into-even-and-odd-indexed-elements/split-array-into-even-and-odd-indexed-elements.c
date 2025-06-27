#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[6];
	int b[6];
	int c[12];
	int i, j = 0, k = 0;

	printf("Enter 12 elements for array c:\n");

	for (i = 0; i < 12; i++)
	{
		scanf("%d", &c[i]);
	}

	for (i = 0; i < 12; i++)
	{
		if (i % 2 == 0)  // even index
		{
			a[j++] = c[i];
		}
		else             // odd index
		{
			b[k++] = c[i];
		}
	}

	printf("Elements of array a (even-indexed from c): ");
	for (i = 0; i < 6; i++)
		printf("%d ", a[i]);

	printf("\n");

	printf("Elements of array b (odd-indexed from c): ");
	for (i = 0; i < 6; i++)
		printf("%d ", b[i]);

	printf("\n");

	return 0;
}
