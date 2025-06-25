#include <stdio.h>

int main()
{
    int count;
    double wheat = 2;

    for (count = 1; count <= 64; count++)
    {
        printf("%d. square %20.f\n", count, wheat);
        wheat = wheat * 2;
    }

    return 0;
}
