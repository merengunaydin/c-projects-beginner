#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float inflationRate, amount, price = 0.52, subscription = 30;
	float baseCost, totalWithInflation = 0, totalWithoutInflation;
	float inflation;
	int i;

	printf("Enter the electricity usage (kWh): ");
	scanf("%f", &amount);

	printf("Enter monthly inflation rate (%%): ");
	scanf("%f", &inflationRate);

	inflation = inflationRate / 100;
	baseCost = amount * price + subscription;
	totalWithoutInflation = baseCost * 12;

	printf("\n--- Monthly Bills ---\n");

	for (i = 0; i < 12; i++) {
		float cost = baseCost * pow(1 + inflation, i);
		printf("Month %2d: %.2f TL\n", i + 1, cost);
		totalWithInflation += cost;
	}

	printf("\nTotal Cost Without Inflation : %.2f TL", totalWithoutInflation);
	printf("\nTotal Cost With Inflation    : %.2f TL\n", totalWithInflation);

	return 0;
}
