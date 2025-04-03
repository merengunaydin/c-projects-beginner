#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char antibiyotikTuru;
	int dozSayisi;
	float toplam, doz, gr;

	printf("Kullanilacak antibiyotik turunu giriniz (A, a, B, b) : ");
	scanf("%c",&antibiyotikTuru);

	printf("Cocugun kilosunu giriniz (gr) : ");
	scanf("%f", &gr);

	if (antibiyotikTuru == 'a' || antibiyotikTuru == 'A')
	{
		if (gr < 10000)
			toplam = 75 * (gr / 1000);
		else if (gr <= 40000)
			toplam = 150 * (gr / 1000);
		else
			toplam = 4500;

		doz = toplam / 4;
		dozSayisi = 4;
	}

	if (antibiyotikTuru == 'b' || antibiyotikTuru == 'B')
	{
		if (gr < 10000)
			toplam = 60 * (gr / 1000);
		else if (gr <= 40000)
			toplam = 120 * (gr / 1000);
		else
			toplam = 3000;

		doz = toplam / 3;
		dozSayisi = 3;
	}

	printf("Cocuk, %c turundeki antibiyotikten gunde %d defa %.2f mglik dozlar halinde almalıdır.\n\n",antibiyotikTuru,dozSayisi,doz);

	return 0;
}