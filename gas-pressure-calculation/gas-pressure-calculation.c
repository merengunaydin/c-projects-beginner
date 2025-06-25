#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Program to calculate the pressure of a gas in a closed container
	Formula: pressure = (number of moles × R × temperature) / volume
	R = 0.82 L·atm / mol·K
*/

int main()
{
	float pressure, R = 0.82;
	int numberOfMoles, volume, temperature;

	printf("Enter number of moles (mol): ");
	scanf("%d", &numberOfMoles);

	printf("Enter volume (L): ");
	scanf("%d", &volume);

	printf("Enter temperature (K): ");
	scanf("%d", &temperature);

	pressure = (numberOfMoles * R * temperature) / volume;

	printf("-----------------------------\n");
	printf("Calculated pressure: %.2f atm\n\n", pressure);

	return 0;
}
