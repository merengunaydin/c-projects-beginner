#include <stdio.h>

int main()
{
	char myKey;
	printf("bir tusa basiniz: ");
	myKey = getchar();
	printf("%c tusunu bastiniz.\n", myKey);
	printf("tusun ASCII kodu: %d\n\n", myKey);

	putchar(65);
	putchar(32);
	putchar(66);
	putchar(32);
	putchar(67);
	putchar(32);
	putchar(68);

	return 0;
}