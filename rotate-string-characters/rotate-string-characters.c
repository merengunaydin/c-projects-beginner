#include <stdio.h>

void rotateString(char*, int);

int main()
{
	char str[7] = { 'Y', 'a', 'z', 'i', 'l', 'i', 'm' };
	int size = sizeof(str) / sizeof(str[0]);

	rotateString(str, size);

	return 0;
}

void rotateString(char* str, int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			printf("%c", *(str + j));
		}
		for (j = 0; j < i; j++)
		{
			printf("%c", *(str + j));
		}
		printf("\n");
	}
}
