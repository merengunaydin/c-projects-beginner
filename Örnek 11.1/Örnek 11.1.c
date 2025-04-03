#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[6];
	int i, j;

	printf("Ssayilari giriniz: ");
	
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("SAYILAR VE HISTOGRAMLARI\n");

	for (i = 0; i < 6; i++)
	{
		printf("%d	", array[i]);

		for (j = 0; j < array[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}