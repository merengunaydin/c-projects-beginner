#include <stdio.h>

int main()
{
    int flightNo, capacity;

    printf("Enter the flight number: ");
    scanf("%d", &flightNo);

    int flightGroup = flightNo / 10;

    capacity = flightGroup * 12 + 60;

    printf("Estimated Passenger Capacity: %d\n", capacity);

    return 0;
}
