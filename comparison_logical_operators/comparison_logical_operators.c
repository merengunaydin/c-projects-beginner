#include <stdio.h>

int main()
{
    int x, y;

    x = 7;
    y = 2;

    printf("result x=y: %d\n", x == y);
    printf("result x!=y: %d\n", x != y);
    printf("result x<y: %d\n", x < y);
    printf("result x>y: %d\n", x > y);
    printf("result x<=y: %d\n", x <= y);
    printf("result x>=y: %d\n\n", x >= y);

    printf("result: %d\n", x > y && x > 5);
    printf("result: %d\n", x == y && x > 5);
    printf("result: %d\n", x > y || x > 5);
    printf("result: %d\n", x == y || x > 5);
    printf("result: %d\n", !(x > y || x > 5));
    printf("result: %d\n", !(x == y || x > 5));

    printf("\n\n");
    return 0;
}
