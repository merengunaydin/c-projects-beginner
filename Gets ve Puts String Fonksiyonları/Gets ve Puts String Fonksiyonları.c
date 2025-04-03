#include <stdio.h>

int main()
{
	char message[100];

	puts("Please enter a sentence: ");
	gets(message);

	puts("\nYour sentence: ");
	puts(message);

	return 0;
}