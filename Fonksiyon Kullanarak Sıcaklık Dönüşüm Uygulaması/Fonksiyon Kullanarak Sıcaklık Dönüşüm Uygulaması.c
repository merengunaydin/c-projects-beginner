#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculateCel(float C);
void calculateFah(float F);

int main()
{
	char CorF;
	float enterNumber;

	printf("Celcius'tan Fahrenait'e cevirme(C / c) , Fahrenait'ten Celcius'a cevirme(F / f): ");
	scanf("%c", &CorF);

	if (CorF == 'C' || CorF == 'c')
	{
		printf("Celcius degerini giriniz: ");
		scanf("%f", &enterNumber);
		calculateCel(enterNumber);
	}
	else if (CorF == 'F' || CorF == 'f')
	{
		printf("Fahrenait degerini giriniz: ");
		scanf("%f", &enterNumber);
		calculateFah(enterNumber);
	}

	return 0;
}

void calculateCel(float C)
{
	float ilkDeger;
	ilkDeger = C;
	C = (C * 9 / 5) + 32;
	printf("%.2f celcius --> %.2f fahrenait.",ilkDeger,C);
}

void calculateFah(float F)
{
	float ilkDeger;
	ilkDeger = F;
	F = (F - 32) * 5 / 9;
	printf("%.2f fahrenait --> %.2f celcius.", ilkDeger, F);
}
