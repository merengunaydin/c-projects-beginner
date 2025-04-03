#include <stdio.h>

void degistirme(char*, int);

int main()
{
	char cha[7] = { 'Y', 'a', 'z', 'i', 'l', 'i', 'm' };

	int size = sizeof(cha)/sizeof(cha[0]);

	degistirme(cha, size);

	return 0;
}

void degistirme(char* chaF, int sizeF )
{
	int i, j, k=sizeF;

	for (i = 0; i < sizeF + 1; i++)
	{
		for (j = i; j < sizeF; j++)
		{
			printf("%c", *(chaF + j));
		}
		for (j = 0; j < i; j++)
		{
			printf("%c", *(chaF + j));
		}
		printf("\n");
	}
}