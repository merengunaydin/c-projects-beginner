#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ogrenciSayisi, count=1, ogrenciYas, toplamYas1621=0, toplamYas2428=0, c1621=0, c2428=0;
	float ort1, ort2;

	printf("Kac adet ogrenci var ? : ");
	scanf("%d", &ogrenciSayisi);

	while (count <= ogrenciSayisi)
	{
		printf("%d. ogrencinin yasini giriniz : ",count);
		scanf("%d", &ogrenciYas);

		if (ogrenciYas > 27 || ogrenciYas < 1)
			{
				printf("Hatali giris yapitiniz. Yas 16-28 arasinda olmali. \n");
				continue;
			}

		if (ogrenciYas < 28 && ogrenciYas>24)
			{
				toplamYas2428 = toplamYas2428 + ogrenciYas;
				c2428++;
			}	

		if (ogrenciYas < 21 && ogrenciYas>16)
			{
				toplamYas1621 = toplamYas1621 + ogrenciYas;
				c1621++;
			}

		count++;
	}

	ort1 = toplamYas1621 / c1621;
	ort2 = toplamYas2428 / c2428;

	printf("Yaşı 16-21 arasindaki ogrencilerin yas ortalaması : %.2f\n",ort1);
	printf("Yaşı 24-28 arasindaki ogrencilerin yas ortalaması : %.2f\n", ort2);

	printf("Program Bitti\n\n");

	return 0;
}