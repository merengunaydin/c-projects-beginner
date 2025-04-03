#include <stdio.h>
#include <string.h>
#define N 100

void func(char*);

int main()
{
	char sentence[N];
	char* ptr;
	
	puts("Bir cümle giriniz : ");
	gets(sentence);

	
	func(sentence);

	return 0;
}

void func(char* sentence)
{
	int i=0;
	printf("%c", sentence[i]);
	while (sentence[i] != '\0')
	{
		if (sentence[i] == ' ')
		{
			printf("%c", sentence[i + 1]);
		}
		i++;
	}

	return 0;
}