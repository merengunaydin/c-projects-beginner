#include <stdio.h>
#include <string.h>
#define N 100

void reverseString(char*);

int main()
{
    char sentence[N];

    printf("Please enter a sentence: ");
    fgets(sentence, N, stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    reverseString(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}

void reverseString(char* sentence)
{
    int length = strlen(sentence);
    char temp;

    for (int i = 0; i < length / 2; i++)
    {
        temp = sentence[i];
        sentence[i] = sentence[length - 1 - i];
        sentence[length - 1 - i] = temp;
    }
}
