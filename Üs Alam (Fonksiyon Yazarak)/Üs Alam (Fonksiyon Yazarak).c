#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float usalma(int taban, float us);


int main()
{
	int taban;
	float us;
	printf("Luften tabani ve ussu giriniz: ");
	scanf("%d%f",&taban,&us);
	printf("Sonuc: %f",usalma(taban, us));

	return 0;
}

float usalma(int taban, float us)
{
	int i;
	float sonucFonk = 1;

	if (us < 0)
	{
		us = -us;
		for (i = 0; i < us; i++)
		{
			sonucFonk *= taban;
		}
		sonucFonk = 1 / sonucFonk;
	}
	else
	{
		for (i = 0; i < us; i++)
		{
			sonucFonk *= taban;
		}
	}

	return sonucFonk;
}