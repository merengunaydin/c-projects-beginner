#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rotate(int array[], int dondurmeMikFonk);

int main()
{
	int array[10];
	int i, dondurmeMik;

	printf("Dizinin elemanlarini giriniz: ");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Dodnurme miktarini giriniz: ");
	scanf("%d", &dondurmeMik);
	
	printf("-----------------------------\n");

	rotate(array, dondurmeMik);

	return 0;
}

void rotate(int array[], int dondurmeMikFonk)
{
	int yedek, i, k;
	for (k = 0; k < dondurmeMikFonk; k++)
	{
		for (i = 0; i < 10; i++)
		{
			yedek = array[10 - i];
			array[10 - i] = array[i];
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}


}