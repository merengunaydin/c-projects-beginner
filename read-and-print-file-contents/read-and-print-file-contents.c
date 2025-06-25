#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fptr;
	char letter[60];
	int i = 0;

	fptr = fopen("textFile.txt", "r");

	if (fptr == NULL)
		printf("File can't be read.\n");
	else
	{
		printf("File read successfully!\n");
		do {
			letter[i] = getc(fptr);
			if (letter[i] != EOF)
				printf("%c", letter[i]);
			i++;
		} while (letter[i - 1] != EOF);
	}

	fclose(fptr);

	return 0;
}
