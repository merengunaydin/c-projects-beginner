#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int findMostDeviatedDay(float prices[]);

int main()
{
	float prices[30];
	int i;

	printf("Enter the gold prices for the last 30 days:\n");

	for (i = 0; i < 30; i++)
	{
		scanf("%f", &prices[i]);
	}

	int day = findMostDeviatedDay(prices);
	printf("The gold price deviated most from the average on day %d.\n", day);

	return 0;
}

int findMostDeviatedDay(float prices[])
{
	float sum = 0.0, avg, maxDeviation = 0.0, diff;
	int mostDeviatedDay = 1;  // default to day 1 in case all are equal
	int i;

	for (i = 0; i < 30; i++)
	{
		sum += prices[i];
	}
	avg = sum / 30;

	for (i = 0; i < 30; i++)
	{
		diff = fabs(prices[i] - avg);
		if (diff > maxDeviation)
		{
			maxDeviation = diff;
			mostDeviatedDay = i + 1;
		}
	}

	return mostDeviatedDay;
}
