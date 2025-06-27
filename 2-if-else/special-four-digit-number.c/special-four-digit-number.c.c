#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int abcd, ab, cd;

	printf("Please enter a four-digit number: ");
	scanf("%d", &abcd);

	if (abcd < 1000 || abcd > 9999)
	{
		printf("\nYou entered a wrong number. It must be four digits.\n\n");
		return 1;
	}

	cd = abcd % 100;
	ab = abcd / 100;

	if ((ab + cd) * (ab + cd) == abcd)
	{
		printf("\nIt is a special number!\n\n");
	}
	else
	{
		printf("\nIt is not a special number.\n\n");
	}

	return 0;
}

