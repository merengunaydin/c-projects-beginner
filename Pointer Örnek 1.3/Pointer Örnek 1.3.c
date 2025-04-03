#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void ara(int, int*, int*, int*, int[N][N]);

int main()
{
	int aranan, randomSayi, i, j, satir, sutun, kontrol;
	int arr[N][N];
	
	printf("Dizi icerisinde aranacak deger: ");
	scanf("%d", &aranan);

	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			randomSayi = rand() % 10;
			arr[i][j] = randomSayi;
		}
	}
	
	ara(aranan, &kontrol, &satir, &sutun, arr);

	printf("Girilen bu deger dizi icerisinde ");
	if (kontrol == 1)
	{
		printf("vardir.\n");
		printf("Girilen eleman bu dizinin %d satir %d sutununda bulunur.", satir, sutun);
	}
	else
		printf("yoktur.\n");

	return 0;

}

void ara(int aranan, int* kptr, int* saptr, int* suptr, int arr[N][N])
{
	int i, j;

	*kptr = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (aranan == arr[i][j])
			{
				*kptr = 1;
				*saptr = i;
				*suptr = j;
			}
		}
	}
}