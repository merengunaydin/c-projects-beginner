#include <stdio.h>

int main()
{

	int i;

/*
	for (i = 0; i <= 10; i++) // kodu çalıştırdığımızda 5'i atlayarak yazdırıyor.
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
*/

	i = 0;

	while (i <= 10)
	{
		if (i == 5)
		{
			break; // kodu çalıştırığımızda 5'e geldiğinde kod duruyor.
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}

