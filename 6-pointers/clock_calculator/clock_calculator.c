#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void updateTime(int, int*, int*, int*);

int main()
{
	int hour, minute, second, toAdd;

	printf("Enter time (hour, minute, second): ");
	scanf("%d%d%d", &hour, &minute, &second);

	printf("Enter duration to add (seconds): ");
	scanf("%d", &toAdd);

	updateTime(toAdd, &hour, &minute, &second);

	printf("New time = %d : %d : %d", hour, minute, second);

	return 0;
}

void updateTime(int toAdd, int* hour, int* minute, int* second)
{
	int currentS, currentM;
	currentS = toAdd + *second;

	*second = currentS % 60;
	*minute = *minute + (currentS / 60);
	currentM = *minute;
	*minute = currentM % 60;
	*hour = *hour + (currentM / 60);
}