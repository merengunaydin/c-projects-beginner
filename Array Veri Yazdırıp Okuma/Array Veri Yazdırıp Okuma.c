#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, dice, howMany[7] = { 0 };

	srand(time(NULL));

	for (i = 0; i < 10000000; i++)		// olasılık arttıkça ideale yaklaşıyor.
	{
		dice = rand() % 6;
		howMany[dice]++;
	}

	for (i = 1; i < 7; i++)
	{
		printf("%d. side %d\n",i,howMany[i-1]);
	}

	return 0;
}