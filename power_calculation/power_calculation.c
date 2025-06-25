#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float calculatePower(int base, float exponent);

int main()
{
    int base;
    float exponent;
    printf("Please enter the base and the exponent: ");
    scanf("%d%f", &base, &exponent);
    printf("Result: %f", calculatePower(base, exponent));

    return 0;
}

float calculatePower(int base, float exponent)
{
    int i;
    float result = 1;

    if (exponent < 0)
    {
        exponent = -exponent;
        for (i = 0; i < exponent; i++)
        {
            result *= base;
        }
        result = 1 / result;
    }
    else
    {
        for (i = 0; i < exponent; i++)
        {
            result *= base;
        }
    }

    return result;
}
