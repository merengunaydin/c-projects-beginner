#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Dsatir 10
#define Dsutun 10
#define mayinSayisi 60


void mayinYerlestir(int array[Dsatir][Dsutun]);

int main()
{
	int array[Dsatir][Dsutun] = { 0 };

	mayinYerlestir(array);
	
	return 0;
}

void mayinYerlestir(int array[Dsatir][Dsutun])
{
	int satir, sutun, i, j;

	srand(time(NULL));

	for (i = 0; i < mayinSayisi; i++)
	{
		satir = rand() % Dsatir;
		sutun = rand() % Dsutun;
		if (array[satir][sutun] == 1)
		{
			i--;
			continue;
		}
		else
		{
			array[satir][sutun] = 1;
		}
	}

	for (i = 0; i < Dsatir; i++)
	{
		for (j = 0; j < Dsutun; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
