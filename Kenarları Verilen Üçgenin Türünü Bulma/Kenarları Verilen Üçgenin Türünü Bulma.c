#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Üç kenar uzunluğu girilen üçgenin türünü belirleyen program
*/

int main()
{
	int side1, side2, side3;

	printf("Please enter three side of triangle: ");
	scanf("%d%d%d", &side1, &side2, &side3);

	if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 !=side2) || (side2 == side3 && side2 != side1) )
	{
		printf("\nIt is isosceles triangle.\n\n");
	}
	else if (side1 == side2 == side3)
	{
		printf("\nIt is equilateral triangle.\n\n");
	}
	else
	{
		printf("\nIt is scalene triangle\n\n");
	}

	return 0;
}