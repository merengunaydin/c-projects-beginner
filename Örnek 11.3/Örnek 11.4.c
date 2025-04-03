#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[6];
	int b[6];
	int c[12];
	int i, j=0, k=0;

	printf("c dizisinin elemanlarini giriniz:\n");

	for (i = 0; i < 12; i++)
	{
		scanf("%d", &c[i]);
	}

	for (i = 0; i < 12; i++)
	{
		if ((i + 2) % 2 == 0)
		{
			a[j] = c[i];
			j++;
		}
		else if ((i + 2) % 2 != 0)
		{
			b[k] = c[i];
			k++;
		}
	}

	printf("a dizisinin elemanlari: ");
	for (i = 0; i < 6; i++)
		printf("%d ", a[i]);

	printf("\n");

	printf("b dizisinin elemanlari: ");
	for (i = 0; i < 6; i++)
		printf("%d ", b[i]);

	return 0;
}