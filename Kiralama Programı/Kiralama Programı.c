#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char type;
	int km, day, price;

	printf("Araba Turleri\n");
	printf("(A veya a) Arazi\n");
	printf("(B veya b) Binek\n");
	printf("(P veya p) Spor\n");

	printf("---------------------\n");

	printf("Arabanin turunu giriniz = ");
	scanf("%c", &type);
	printf("Arabayi kac gun kullandiniz = ");
	scanf("%d", &day);
	printf("Araba ile kac km yol yaptiniz = ");
	scanf("%d", &km);

	printf("----------------------\n");

	if (day <= 0 || km <= 0)
	{
		printf("Gun veya km yanlis girildi.\n\n");

		return 1;
	}
	else 
	{
		switch (type)
		{
		case 'A': price = 20 * day + 18 * km;
		case 'a': price = 20 * day + 18 * km;
			break;
		case 'B': price = 32 * day + 22 * km;
		case 'b': price = 32 * day + 22 * km;
			break;
		case 'P': price = 51 * day + 36 * km;
		case 'p': price = 51 * day + 36 * km;
			break;
		default: printf("Yanlis araba kodu girdiniz.\n\n");
			return 1;
		}
	}
	

	printf("Odemeniz gereken tutar = %d$\n\n",price);

	return 0;
}