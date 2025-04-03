#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no, yolcu = 1, count;

	printf("Ucak numarasini giriniz : ");
	scanf("%d", &no);

	no = no / 10;

	for (count = 1; count <= no; count++)
	{
		yolcu = count * yolcu;
	}

	yolcu = yolcu * 5;

	printf("Yolcu Sayisi = %d", yolcu);

	return 0;
}