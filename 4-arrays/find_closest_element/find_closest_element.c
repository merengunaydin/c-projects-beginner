#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findClosest(int, int*, int*, int[]);

int main()
{
	int array[9] = { 9, 7, 3, 4, 11, 67, 25, 56, 34 };
	int target;
	int index;
	int element;

	printf("Enter the target number: "); scanf("%d", &target);

	findClosest(target, &index, &element, array);

	printf("Closest element: %d\n", element);
	printf("Index: %d", index);

	return 0;
}

void findClosest(int target, int* index, int* element, int array[])
{
	int i, calc = 0, flag = 100;

	for (i = 0; i < 9; i++)
	{
		calc = target - array[i];
		if (calc < 0)
			calc = -calc;

		if (calc < flag)
		{
			flag = calc;
			*element = array[i];
			*index = i;
		}
	}
}