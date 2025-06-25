#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int enterNumber, count, flag = 0;

    printf("Please enter a number: ");
    scanf("%d", &enterNumber);

    if (enterNumber < 2)
    {
        printf("%d is not a prime number.\n", enterNumber);
        return 0;
    }

    for (count = 2; count < enterNumber; count++)
    {
        if (enterNumber % count == 0)
        {
            printf("%d is not a prime number.\n", enterNumber);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", enterNumber);

    return 0;
}
