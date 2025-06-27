#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fptr;
	char str[100];
	int i;

	fptr = fopen("textFile.txt", "w");

	if (fptr == NULL)
		printf("File could not be created!\n");
	else
	{
		printf("Enter a sentence: ");
		for (i = 0; i < 4; i++)
		{
			fgets(str, sizeof(str), stdin);
			fprintf(fptr, "%s", str);
		}

		printf("File created successfully!\n");
	}

	fclose(fptr);

	return 0;
}
