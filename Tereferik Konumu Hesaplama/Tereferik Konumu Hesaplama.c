#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int konum, flag, kuleyeUzaklik;
	float hız;

	printf("Vagonun konum bilgisini giriniz : ");
	scanf("%d", &konum);
	printf("------------------------------\n");

	if (konum <= 500)
	{
		kuleyeUzaklik = 500 - konum;
		flag = 1;
	}
	else
	{
		kuleyeUzaklik = 1000 - konum;
		flag = 0;
	}

	hız = 2.425 + 0.00175 * (kuleyeUzaklik * kuleyeUzaklik);

	if (flag = 1 && konum <= 250)
		printf("Vagonun yakin oldugu kule : 1");
	else if (flag = 1 && konum >= 250)
		printf("Vagonun yakin oldugu kule : 2");
	else if (flag = 0 && konum <= 250)
		printf("Vagonun yakin oldugu kule : 2");
	else
		printf("Vagonun yakin oldugu kule : 3");

	printf("\nTeleferik vagonunu hizi : %.3f", hız);
	return 0;
}