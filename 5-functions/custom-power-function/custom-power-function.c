#include <stdio.h>

float power(float x, int y);

int main()
{
	float xMain, result;
	int yMain;

	printf("Please enter x and y: ");
	scanf("%f%d", &xMain, &yMain);

	result = power(xMain, yMain);

	printf("Result: %.2f\n", result);

	return 0;
}

float power(float x, int y)
{
	int count;
	float resultFonk = 1;

	if (y < 0)
	{
		for (count = 1; count <= -y; count++)
		{
			resultFonk *= x;
		}
		resultFonk = 1.0 / resultFonk;
	}
	else if (y > 0)
	{
		for (count = 1; count <= y; count++)
		{
			resultFonk *= x;
		}
	}
	else
	{
		return 1;
	}

	return resultFonk;
}
