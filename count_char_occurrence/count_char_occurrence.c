#include <stdio.h>
#include <string.h>
#define N 100

void countCharacter(char target, char* sentence, int* result);

int main()
{
    char sentence[N];
    char targetChar;
    int result = 0;

    printf("Please enter a sentence: ");
    fgets(sentence, N, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf(" %c", &targetChar);

    countCharacter(targetChar, sentence, &result);

    printf("The character '%c' appears %d times in the sentence.\n", targetChar, result);

    return 0;
}

void countCharacter(char target, char* sentence, int* result)
{
    int i = 0;

    while (sentence[i] != '\0')
    {
        if (sentence[i] == target)
        {
            (*result)++;
        }
        i++;
    }
}
