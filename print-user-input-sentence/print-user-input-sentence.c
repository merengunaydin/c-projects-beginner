#include <stdio.h>

int main()
{
	char message[100];

	printf("Please enter a sentence:\n");
	fgets(message, sizeof(message), stdin);

	printf("\nYour sentence:\n");
	puts(message);

	return 0;
}
