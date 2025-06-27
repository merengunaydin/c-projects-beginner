#include <stdio.h>

int main()
{
	char myKey;

	printf("Press a key: ");
	myKey = getchar();

	printf("You pressed the '%c' key.\n", myKey);
	printf("The ASCII code of the key is: %d\n\n", myKey);

	// Print characters using ASCII values
	putchar(65);  // A
	putchar(32);  // space
	putchar(66);  // B
	putchar(32);  // space
	putchar(67);  // C
	putchar(32);  // space
	putchar(68);  // D
	putchar('\n');

	return 0;
}
