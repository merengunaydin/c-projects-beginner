#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float x, y, sum = 0;
    char calculate;  
    printf("Please enter two numbers and an operation (+, -, *, /): ");
    scanf("%f %c %f", &x, &calculate, &y);

    switch (calculate)
    {
    case '+': sum = x + y;
        break;
    case '-':sum = x - y;
        break;
    case '*': sum = x * y;
        break;
    case '/':
        if (y != 0) 
            sum = x / y;
        else
            printf("Error: Division by zero!\n");
        return 1;
    default:
        printf("Invalid operation.\n");
        return 1;
    }

    printf("\nResult is: %.2f\n", sum);

    return 0;
}
