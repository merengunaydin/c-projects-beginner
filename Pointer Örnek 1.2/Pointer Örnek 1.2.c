#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ayir(float, char* , int* , float*);

int main()
{
	float sayi, ondalik;
	int tam;
	char isaret;

	printf("Ondalikli sayi giriniz: ");
	scanf("%f", &sayi);

	ayir(sayi, &isaret, &tam, &ondalik);

	printf("%f sayisinin analizi:\n", sayi);
	printf("Sayinin isareti %c\n", isaret);
	printf("Sayinin tam kismi %d\n", tam);
	printf("Sayinin ondalik kismi: %f\n", ondalik);

	return 0;
}

void ayir(float sayi, char* iptr, int* tptr, float* optr)
{
	if (sayi < 0)
	{
		*iptr = '-';
	}
	else
	{
		*iptr = '+';
	}

	*tptr = sayi;
	*optr = sayi - *tptr;

	if (*tptr < 0)
		*tptr = -*tptr;
}