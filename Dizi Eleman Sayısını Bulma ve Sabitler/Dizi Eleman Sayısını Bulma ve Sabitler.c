#include <stdio.h>

int main()
{
	const int array[] = { 1,2,3,4,5,6,7,8,9 };		// const komutu değeri sabitler. ör: array[] dizisinde değeri verilmiş olan veriler değiştirilemez.

	printf("%d", sizeof(array) / sizeof(array[0]));		// dizide kaç eleman olduğunu bulma.

	return 0;
}

