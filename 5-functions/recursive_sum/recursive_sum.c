#include <stdio.h>

int sumNumber(int i);

int main()
{
    int result = sumNumber(10);

    printf("%d\n", result);

    return 0;
}

int sumNumber(int i)
{
    if (i > 0)
    {
        return i + sumNumber(i - 1);
    }
    else
    {
        return 0;
    }
}
