#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int position, flag, distanceToTower;
    float speed;

    printf("Enter the position of the cable car: ");
    scanf("%d", &position);
    printf("------------------------------\n");

    if (position <= 500)
    {
        distanceToTower = 500 - position;
        flag = 1;
    }
    else
    {
        distanceToTower = 1000 - position;
        flag = 0;
    }

    speed = 2.425 + 0.00175 * (distanceToTower * distanceToTower);

    if (flag == 1 && position <= 250)
        printf("Nearest tower: 1");
    else if (flag == 1 && position > 250)
        printf("Nearest tower: 2");
    else if (flag == 0 && position <= 750)
        printf("Nearest tower: 2");
    else
        printf("Nearest tower: 3");

    printf("\nCable car speed: %.3f\n", speed);
    return 0;
}
