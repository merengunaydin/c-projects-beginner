#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int enKucukBul(int array[]);

int main()
{
	int array[10];
	int i;

	printf("10 sayi giriniz: ");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("dizideki en kucuk sayi: %d", enKucukBul(array));

	return 0;
}

int enKucukBul(int array[])
{
	int enKucuk=99999, i;

	for (i = 0; i < 10; i++)
	{
		if (array[i] < enKucuk)
			enKucuk = array[i];
	}

	return enKucuk;
}