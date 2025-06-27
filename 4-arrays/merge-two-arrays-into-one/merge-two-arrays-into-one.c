#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[5];
	int b[5];
	int c[10];
	int i;

	printf("Enter 5 elements for array a:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("Enter 5 elements for array b:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (i < 5)
			c[i] = a[i];
		else
			c[i] = b[i - 5];
	}

	printf("Combined array c:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}

	printf("\n");
	return 0;
}
