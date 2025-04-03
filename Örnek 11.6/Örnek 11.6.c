#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[10];
	int i;
	float ort = 0.0;

	printf("dizinin elemanlarini giriniz: ");

	for (i = 0; i < 10; i++)
	{
		scanf("%d",&array[i]);
	}

	for (i = 0; i < 10; i++)
	{
		ort = ort + array[i];
	}

	ort = ort / 10;

	printf("Dizinin ortalamasi: %.1f\n", ort);

	printf("Ortalamadan kucuk olanlar: ");

	for (i = 0; i < 10; i++)
	{
		if (array[i] < ort)
			printf("%d ", array[i]);
	}

	return 0;
}