#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void splitDigits(int number);
void writeUnits(int digit);
void writeTens(int digit);
void writeHundreds(int digit);
void writeThousands(int digit);

int main()
{
    int number;
    printf("Please enter a four-digit number: ");
    scanf("%d", &number);

    splitDigits(number);

    return 0;
}

void splitDigits(int number)
{
    int units, tens, hundreds, thousands;

    units = number % 10;
    tens = (number % 100) / 10;
    hundreds = (number % 1000) / 100;
    thousands = number / 1000;

    writeThousands(thousands);
    writeHundreds(hundreds);
    writeTens(tens);
    writeUnits(units);
}

void writeUnits(int digit)
{
    switch (digit)
    {
    case 1: printf("Bir "); break;
    case 2: printf("Iki "); break;
    case 3: printf("Uc "); break;
    case 4: printf("Dort "); break;
    case 5: printf("Bes "); break;
    case 6: printf("Alti "); break;
    case 7: printf("Yedi "); break;
    case 8: printf("Sekiz "); break;
    case 9: printf("Dokuz "); break;
    default: break;
    }
}

void writeTens(int digit)
{
    switch (digit)
    {
    case 1: printf("On "); break;
    case 2: printf("Yirmi "); break;
    case 3: printf("Otuz "); break;
    case 4: printf("Kirk "); break;
    case 5: printf("Elli "); break;
    case 6: printf("Atmis "); break;
    case 7: printf("Yetmis "); break;
    case 8: printf("Seksen "); break;
    case 9: printf("Doksan "); break;
    default: break;
    }
}

void writeHundreds(int digit)
{
    switch (digit)
    {
    case 1: printf("Yuz "); break;
    case 2: printf("Iki Yuz "); break;
    case 3: printf("Uc Yuz "); break;
    case 4: printf("Dort Yuz "); break;
    case 5: printf("Bes Yuz "); break;
    case 6: printf("Alti Yuz "); break;
    case 7: printf("Yedi Yuz "); break;
    case 8: printf("Sekiz Yuz "); break;
    case 9: printf("Dokuz Yuz "); break;
    default: break;
    }
}

void writeThousands(int digit)
{
    switch (digit)
    {
    case 1: printf("Bin "); break;
    case 2: printf("Iki Bin "); break;
    case 3: printf("Uc Bin "); break;
    case 4: printf("Dort Bin "); break;
    case 5: printf("Bes Bin "); break;
    case 6: printf("Alti Bin "); break;
    case 7: printf("Yedi Bin "); break;
    case 8: printf("Sekiz Bin "); break;
    case 9: printf("Dokuz Bin "); break;
    default: break;
    }
}
