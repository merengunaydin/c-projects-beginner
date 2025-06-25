#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fptr;
	char letter;

	fptr = fopen("text.txt", "r");

	if (fptr == NULL)
		printf("text.txt can't be opened!\n");
	else
	{
		printf("text.txt opened successfully!\n");
		while ((letter = fgetc(fptr)) != EOF)
		{
			printf("%c", letter);
		}
	}

	fclose(fptr);
	return 0;
}