#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float x, y, result;
    char op;

    printf("Please enter an operation (example: 5.2 * 3): ");
    if (scanf("%f %c %f", &x, &op, &y) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    switch (op)
    {
    case '+':
        result = x + y;
        printf("\nResult: %.2f\n", result);
        break;
    case '-':
        result = x - y;
        printf("\nResult: %.2f\n", result);
        break;
    case '*':
        result = x * y;
        printf("\nResult: %.2f\n", result);
        break;
    case '/':
        if (y == 0) {
            printf("Error: Division by zero is undefined!\n");
        }
        else {
            result = x / y;
            printf("\nResult: %.2f\n", result);
        }
        break;
    default:
        printf("Error: Unsupported operator '%c'.\n", op);
    }

    return 0;
}
