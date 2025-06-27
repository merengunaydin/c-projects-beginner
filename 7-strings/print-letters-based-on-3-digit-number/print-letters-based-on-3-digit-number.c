#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[4];  // 3 digits + null terminator
	int i;

	printf("Enter a three-digit number: ");
	scanf("%3s", str);  // read max 3 characters

	for (i = 0; i < str[0] - '0'; i++) {
		printf("Z");
	}

	for (i = 0; i < str[1] - '0'; i++) {
		printf("U");
	}

	for (i = 0; i < str[2] - '0'; i++) {
		printf("I");
	}

	return 0;
}
