#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int enterNumber, count, flag = 0;

    printf("Please enter a number: ");
    scanf("%d", &enterNumber);

    for (count = 2; count <= enterNumber; count++)
    {
        if (count == enterNumber)
        {
            continue;
        }
        if (enterNumber % count == 0)
        {
            printf("%d is not a prime number.", enterNumber);
            flag = 1;
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.",enterNumber);

    printf("\n\n");
    return 0;
}
