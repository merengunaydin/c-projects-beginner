#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void basamaklaraAyirma();
int birlerYaz(int birlerFonk);
int onlarYaz(int onlarFonk);
int yuzlerYaz(int yuzlerFonk);
int binlerYaz(int binlerFonk);



int main()
{
	int enterNumber;
	printf("Please enter a four-digit number: ");
	scanf("%d",&enterNumber);

	basamaklaraAyirma(enterNumber);

	return 0;
}


void basamaklaraAyirma(enterNumberFonk)
{
	int birler, onlar, yuzler, binler;

	birler = enterNumberFonk % 10;
	onlar = (enterNumberFonk % 100) / 10;
	yuzler = (enterNumberFonk % 1000) / 100;
	binler = enterNumberFonk / 1000;

	binlerYaz(binler);
	yuzlerYaz(yuzler);
	onlarYaz(onlar);
	birlerYaz(birler);
}

int birlerYaz(int birlerFonk)
{
	switch (birlerFonk)
	{
	case 1: printf("Bir "); break;
	case 2: printf("Iki "); break;
	case 3: printf("Uc "); break;
	case 4: printf("Dort "); break;
	case 5: printf("Bes "); break;
	case 6: printf("Alti "); break;
	case 7: printf("Yedi "); break;
	case 8: printf("Sekiz "); break;
	case 9: printf("Dokuz "); break;
	}
}

int onlarYaz(int onlarFonk)
{
	switch (onlarFonk)
	{
	case 1: printf("On "); break;
	case 2: printf("Yirmi "); break;
	case 3: printf("Otuz "); break;
	case 4: printf("Kirk "); break;
	case 5: printf("Elli "); break;
	case 6: printf("Atmis "); break;
	case 7: printf("Yetmis "); break;
	case 8: printf("Seksen "); break;
	case 9: printf("Doksan "); break;
	}
}

int yuzlerYaz(int yuzlerFonk)
{
	switch (yuzlerFonk)
	{
	case 1: printf("Yuz "); break;
	case 2: printf("Iki Yuz "); break;
	case 3: printf("Uc Yuz "); break;
	case 4: printf("Dort Yuz "); break;
	case 5: printf("Bes Yuz "); break;
	case 6: printf("Alti Yuz "); break;
	case 7: printf("Yedi Yuz "); break;
	case 8: printf("Sekiz Yuz "); break;
	case 9: printf("Dokuz Yuz "); break;
	}
}

int binlerYaz(int binlerFonk)
{
	switch (binlerFonk)
	{
	case 1: printf("Bin "); break;
	case 2: printf("Iki Bin "); break;
	case 3: printf("Uc Bin "); break;
	case 4: printf("Dort Bin "); break;
	case 5: printf("Bes Bin "); break;
	case 6: printf("Alti Bin "); break;
	case 7: printf("Yedi Bin "); break;
	case 8: printf("Sekiz Bin "); break;
	case 9: printf("Dokuz Bin "); break;
	}
}