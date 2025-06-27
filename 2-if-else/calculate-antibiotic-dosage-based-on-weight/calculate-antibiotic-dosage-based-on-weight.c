#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char antibioticType;
	int doseCount;
	float totalDose, dose, weight;

	printf("Enter the antibiotic type (A, a, B, b): ");
	scanf(" %c", &antibioticType);

	printf("Enter the child's weight (in grams): ");
	scanf("%f", &weight);

	if (antibioticType == 'A' || antibioticType == 'a')
	{
		if (weight < 10000)
			totalDose = 75 * (weight / 1000);
		else if (weight <= 40000)
			totalDose = 150 * (weight / 1000);
		else
			totalDose = 4500;

		dose = totalDose / 4;
		doseCount = 4;
	}
	else if (antibioticType == 'B' || antibioticType == 'b')
	{
		if (weight < 10000)
			totalDose = 60 * (weight / 1000);
		else if (weight <= 40000)
			totalDose = 120 * (weight / 1000);
		else
			totalDose = 3000;

		dose = totalDose / 3;
		doseCount = 3;
	}
	else
	{
		printf("Invalid antibiotic type entered.\n");
		return 1;
	}

	printf("The child should take the antibiotic type '%c' %d times a day, with each dose being %.2f mg.\n\n",
		antibioticType, doseCount, dose);

	return 0;
}
