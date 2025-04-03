#include <stdio.h>
#include <string.h>
#define N 100
void tersyaz(char*);

int main()
{
	char sentence[N];

	puts("Please enter a sentence: ");
	gets(sentence);

	tersyaz(sentence);

	printf("%s", sentence);

	return 0;
}

void tersyaz(char* sentence)
{
	int lenght, i;
	char temp;
	lenght = strlen(sentence);

	for (i = 0; i < lenght / 2; i++)
	{
		temp = sentence[i];
		sentence[i] = sentence[lenght - 1 - i];
		sentence[lenght - 1 - i] = temp;
	}

	return 0;
}