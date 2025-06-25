#include <stdio.h>

int main()
{
    const int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // 'const' makes the array elements read-only. You cannot modify them later.

    printf("%d", sizeof(array) / sizeof(array[0]));
    // This expression calculates how many elements are in the array.

    return 0;
}
