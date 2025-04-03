#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int enterNumber, birler, onlar, binler, onbinler;

	printf("5 basamakli bir sayi girniniz: ");
	scanf("%d", &enterNumber);

	printf("------------------\n");

	birler = enterNumber % 10;
	onlar = ((enterNumber % 100) - birler) / 10;
	binler = ((enterNumber % 10000) - (enterNumber % 1000)) / 1000;
	onbinler = (enterNumber - (enterNumber % 10000)) / 10000;

	printf("%d\n", birler);
	printf("%d\n", onlar);
	printf("%d\n", binler);
	printf("%d\n", onbinler);

	return 0;
}