#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fptr;
	char str[4][40];
	int i;

	fptr = fopen("textFile.txt", "w");

	if (fptr == NULL)
		printf("File can't be opened!\n");
	else
	{
		for (i = 0; i < 4; i++)
		{
			printf("Enter sentence %d: ", i + 1);
			fgets(str[i], sizeof(str[i]), stdin);
			fprintf(fptr, "%s", str[i]);
		}
		printf("Write operation successful!\n");
	}

	return 0;
}
