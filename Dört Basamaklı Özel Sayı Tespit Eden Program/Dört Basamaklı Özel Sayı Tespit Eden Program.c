#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int abcd, ab, cd, calculateABCD;

	printf("Please enter a four-digit number: ");
	scanf("%d", & abcd);

	cd = abcd % 100;
	ab = (abcd - cd)/100;
	calculateABCD = ab * ab + 2 * ab * cd + cd * cd;

	if (abcd / 10000 >= 1 || abcd / 1000 < 1 || abcd == cd)
	{
		printf("\nYou enter a wrong number.\n\n");
	}
	else
	{
		if (abcd == calculateABCD)
		{
			printf("\nIt is a special number!\n\n");
		}
		else
		{
			printf("\nIs is not a special number.\n\n");
		}
	}

	return 0;
}