#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100

int main()
{
    int i, squares[N];

    for (i = 0; i < N; i++)
    {
        squares[i] = i * i;
        printf("%d\n", squares[i]);
    }

    return 0;
}