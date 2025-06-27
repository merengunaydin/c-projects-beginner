#include <stdio.h>
#include <string.h>

int main() {
	char str[200];
	char search[20];
	int len, count = 0;
	char* ptr;

	printf("Enter a sentence: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	if (str[len - 1] == '\n')
		str[len - 1] = '\0';

	printf("Enter the string to search for: ");
	fgets(search, sizeof(search), stdin);
	len = strlen(search);
	if (search[len - 1] == '\n')
		search[len - 1] = '\0';

	ptr = str;
	while ((ptr = strstr(ptr, search)) != NULL) {
		ptr += strlen(search);
		count++;
	}

	printf("The entered sentence contains %d occurrences of '%s'.", count, search);

	return 0;
}
