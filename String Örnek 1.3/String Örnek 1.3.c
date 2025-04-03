#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 100

void tekrarBulma(char, char*, int*);

int main()
{
	char sentence[N];
	char aranan;
	int result=0;

	puts("Please enter a sentence: ");
	gets(sentence);
	
	puts("Enter a number which you want search: ");
	scanf(" %c", &aranan);

	tekrarBulma(aranan, sentence, &result);


	printf("%c, %d times repeated in sentence.", aranan, result);

	return 0;
}

void tekrarBulma(char aranan, char* sentence, int* result)
{
	int i=0;

	while (sentence[i] != '\0')
	{
		if (sentence[i] == aranan)
		{
			(*result)++;
		}
		i++;
	}

	return 0;
}