#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void celsiusToFahrenheit(float celsius);
void fahrenheitToCelsius(float fahrenheit);

int main()
{
    char choice;
    float input;

    printf("Convert from Celsius to Fahrenheit (C/c), or from Fahrenheit to Celsius (F/f): ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter Celsius value: ");
        scanf("%f", &input);
        celsiusToFahrenheit(input);
    }
    else if (choice == 'F' || choice == 'f') {
        printf("Enter Fahrenheit value: ");
        scanf("%f", &input);
        fahrenheitToCelsius(input);
    }
    else {
        printf("Invalid option selected.\n");
    }

    return 0;
}

void celsiusToFahrenheit(float celsius)
{
    float original = celsius;
    celsius = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius --> %.2f Fahrenheit\n", original, celsius);
}

void fahrenheitToCelsius(float fahrenheit)
{
    float original = fahrenheit;
    fahrenheit = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit --> %.2f Celsius\n", original, fahrenheit);
}
