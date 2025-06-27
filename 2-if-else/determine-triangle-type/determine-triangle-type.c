#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int side1, side2, side3;

	printf("Please enter the three sides of a triangle: ");
	scanf("%d%d%d", &side1, &side2, &side3);

	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		if (side1 == side2 && side2 == side3)
		{
			printf("\nIt is an equilateral triangle.\n\n");
		}
		else if (side1 == side2 || side1 == side3 || side2 == side3)
		{
			printf("\nIt is an isosceles triangle.\n\n");
		}
		else
		{
			printf("\nIt is a scalene triangle.\n\n");
		}
	}
	else
	{
		printf("\nThe given sides do not form a valid triangle.\n\n");
	}

	return 0;
}
