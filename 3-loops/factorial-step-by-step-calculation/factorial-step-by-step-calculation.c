#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count, enterNumber;
    double factorial = 1;

    printf("Please enter a number to calculate factorial: ");
    scanf("%d", &enterNumber);

    for (count = 1; count <= enterNumber; count++)
    {
        factorial *= count;
        printf("%2d! = %.0f\n", count, factorial);
    }

    return 0;
}
