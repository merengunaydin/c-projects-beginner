#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gunuBul(float array[]);

int main()
{
	float array[30];
	int i;

	printf("Altinin son 30 gunluk degerlerini giriniz:\n");

	for (i = 0; i < 30; i++)
	{
		scanf("%f", &array[i]);
	}

	printf("Altinin ortalama degerden en cok ayin %d. gununde farklilik gostermistir.",gunuBul(array));


	return 0;
}

int gunuBul(float array[])
{
	float ort = 0.0, sapma = 0.0;
	int kacinci, i;

	for (i = 0; i < 30; i++)
	{
		ort = ort + array[i];
	}
	ort = ort / 30;

	for (i = 0; i < 30; i++)
	{
		if (array[i] - ort < 0)
		{
			if ((array[i] - ort)*-1 > sapma)
			{
				sapma = array[i] - ort;
				kacinci = i + 1;
			}
		}
		else
		{
			if ((array[i] - ort) > sapma)
			{
				sapma = array[i] - ort;
				kacinci = i + 1;
			}
		}
		
	}

	return kacinci;
}