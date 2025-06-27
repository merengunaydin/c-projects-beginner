#include <stdio.h>

int main()
{
	FILE* fptr;

	fptr = fopen("text2.txt", "w");

	if (fptr == NULL)
		printf("File can't be created!\n");
	else
	{
		printf("File created successfully!\n");
	}

	fclose(fptr);

	return 0;
}
