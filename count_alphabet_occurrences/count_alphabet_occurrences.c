#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void countCharacters(char input[], int counts[]);

int main()
{
    char input[100];
    int counts[26], i = 0;

    printf("Enter a sentence (end with '.'): ");
    do {
        scanf("%c", &input[i]);
        i++;
    } while (input[i - 1] != '.');

    countCharacters(input, counts);

    for (i = 0; i < 26; i++)
    {
        printf("%c / %c = %d\n", 'A' + i, 'a' + i, counts[i]);
    }

    return 0;
}

void countCharacters(char input[], int counts[])
{
    int i, j, temp;

    for (j = 0; j < 26; j++)
    {
        temp = 0;
        for (i = 0; i < 100; i++)
        {
            if ('A' + j == input[i] || 'a' + j == input[i])
                temp++;
        }
        counts[j] = temp;
    }
}
