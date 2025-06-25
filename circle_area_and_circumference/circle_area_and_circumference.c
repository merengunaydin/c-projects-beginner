#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float r, pi, circum, area;

    pi = 3.14f;

    printf("Please enter the r: ");
    scanf("%f", &r);

    circum = 2 * pi * r;
    area = pi * r * r;

    printf("Circum: %.2f \n", circum);
    printf("Area: %.2f \n", area);

    return 0;
}
