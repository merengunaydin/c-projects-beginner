#include <stdio.h>

int main()
{
    int i;

    /*
    for (i = 0; i <= 10; i++) // skips printing 5
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
    */

    i = 0;

    while (i <= 10)
    {
        if (i == 5)
        {
            break; // stops the loop when i reaches 5
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}
