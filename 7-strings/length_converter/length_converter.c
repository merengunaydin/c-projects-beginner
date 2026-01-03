#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char valueBuffer[10] = { 0 };
	char firstUnit[3];
	char secondUnit[3];
	int i = 0, j = 0, number;
	float result = 0.0;

	puts("Enter your question: ");
	fgets(str, 100, stdin);

	while (isdigit(str[i])) {
		valueBuffer[i] = str[i];
		i++;
	}
	valueBuffer[i] = '\0';
	number = atoi(valueBuffer);

	while (str[i] == ' ') i++;

	j = 0;
	while (str[i] != ' ' && str[i] != '\0') {
		firstUnit[j++] = str[i++];
	}
	firstUnit[j] = '\0';

	while (str[i] == ' ') i++;

	j = 0;
	while (str[i] != ' ' && str[i] != '\0') {
		secondUnit[j++] = str[i++];
	}
	secondUnit[j] = '\0';

	if (strcmp(firstUnit, "km") == 0 && strcmp(secondUnit, "m") == 0)
		result = number * 1000;
	else if (strcmp(firstUnit, "km") == 0 && strcmp(secondUnit, "cm") == 0)
		result = number * 100000;
	else if (strcmp(firstUnit, "km") == 0 && strcmp(secondUnit, "mm") == 0)
		result = number * 1000000;
	else if (strcmp(firstUnit, "m") == 0 && strcmp(secondUnit, "km") == 0)
		result = number / 1000.0;
	else if (strcmp(firstUnit, "m") == 0 && strcmp(secondUnit, "cm") == 0)
		result = number * 100;
	else if (strcmp(firstUnit, "cm") == 0 && strcmp(secondUnit, "m") == 0)
		result = number / 100.0;
	else {
		printf("Invalid conversion units.\n");
		return 1;
	}

	printf("%d %s is %.2f %s\n", number, firstUnit, result, secondUnit);

	return 0;
}