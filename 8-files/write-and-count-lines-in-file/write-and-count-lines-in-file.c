#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fptr;
	char letter;
	int counter = 0, i;
	char str[4][50];

	fptr = fopen("textFile.txt", "w");

	if (fptr == NULL)
	{
		printf("File cannot be created.\n");
		return 1;
	}
	else
	{
		printf("File created successfully.\n");
		for (i = 0; i < 4; i++)
		{
			fgets(str[i], sizeof(str[i]), stdin);
			fprintf(fptr, "%s", str[i]);
		}
	}
	fclose(fptr);

	fptr = fopen("textFile.txt", "r");

	do {
		letter = getc(fptr);
		if (letter == '\n')
			counter++;
	} while (letter != EOF);

	printf("The file contains %d lines.\n", counter);

	fclose(fptr);
	return 0;
}
