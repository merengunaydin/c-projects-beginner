#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int);

int main()
{
    int enteredNumber, result;

    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &enteredNumber);

    result = factorial(enteredNumber);

    printf("The factorial of %d is: %d\n", enteredNumber, result);

    return 0;
}

int factorial(int x)
{
    int resultFunc = 1;

    if (x > 1)
    {
        resultFunc = x * factorial(x - 1);
    }

    return resultFunc;
}
