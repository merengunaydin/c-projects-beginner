#include <stdio.h>
#include <string.h>
#define N 100

void printFirstLetters(char* sentence);

int main()
{
    char sentence[N];

    printf("Enter a sentence: ");
    fgets(sentence, N, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character

    printFirstLetters(sentence);

    return 0;
}

void printFirstLetters(char* sentence)
{
    int i = 0;

    if (sentence[0] != ' ')
    {
        printf("%c", sentence[0]);
    }

    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ' && sentence[i + 1] != '\0' && sentence[i + 1] != ' ')
        {
            printf("%c", sentence[i + 1]);
        }
        i++;
    }

    printf("\n");
}
