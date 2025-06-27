#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int i, dice, counts[7] = { 0 };

    srand(time(NULL));

    for (i = 0; i < 10000000; i++)
    {
        dice = rand() % 6;
        counts[dice]++;
    }

    for (i = 1; i < 7; i++)
    {
        printf("%d. side %d\n", i, counts[i - 1]);
    }

    return 0;
}
