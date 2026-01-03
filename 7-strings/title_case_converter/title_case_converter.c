#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[255];
	int i = 1;

	puts("Enter a sentence: ");
	fgets(str, 255, stdin);

	str[0] = toupper(str[0]);

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ')
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);
		i++;
	}

	printf("%s", str);

	return 0;
}