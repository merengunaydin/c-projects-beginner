#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char mars;
	int count=0, oyuncu1=0, oyuncu2=0, puan=0, kazanan, flag=0;

	do {
		printf("%d. eli kazanani giriniz (1 ya da 2): ",count);
		scanf("%d",&kazanan);

		printf("Mars etti mi (e/h): ");
		scanf(" %c", &mars);

		switch (mars)
		{
		case 'e':
			puan = 2;
				break;
		case 'h':
			puan = 1;
				break;
		}

		switch (kazanan)
		{
		case 1:
			oyuncu1 += puan;
			flag = 1;
				break;
		case 2:
			oyuncu2 += puan;
			flag = 2;
				break;
		}

		count++;

		printf("Paun durumu: %d - %d\n", oyuncu1, oyuncu2);

	} while (oyuncu1 < 5 && oyuncu2 < 5);

	printf("%d EL SONUNDA\n",count);
	printf("KAZANAN %d. OYUNCUDUR\n\n",flag);

	return 0;
}