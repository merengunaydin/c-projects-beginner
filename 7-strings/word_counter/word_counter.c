#include <stdio.h>
#include <string.h>

int main()
{
	char str[255];
	int i = 0, flag = 1;

	puts("Enter a sentence: ");
	gets(str);

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			flag++;

		i++;
	}

	printf("Your sentence have %d words.", flag);

	return 0;
}