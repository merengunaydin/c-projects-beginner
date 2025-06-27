#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    // 1. strlen - Returns the length of the string.
    char alphabet[70] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is %d\n", strlen(alphabet));

    // 2. strcat - Concatenates two strings.
    char str1[30] = "Hello ";
    char str2[] = "C Language";
    strcat(str1, str2);
    printf("%s\n", str1);

    // 3. strcpy - Copies one string to another.
    char str3[30] = "Hello C Language";
    char str4[30];
    strcpy(str4, str3);
    printf("%s\n", str4);

    // 4. strcmp - Compares two strings. Returns 0 if equal, <0 or >0 otherwise.
    int result = strcmp(str1, str3);
    printf("Comparison result: %d\n", result);

    // 5. strncpy - Copies the first n characters.
    char str5[30];
    strncpy(str5, str3, 5); // Copies "Hello"
    str5[5] = '\0'; // Null terminator for a proper string
    printf("Copied first 5 chars: %s\n", str5);

    // 6. strncmp - Compares first n characters of two strings.
    int result2 = strncmp(str1, str3, 5);
    printf("First 5 chars comparison result: %d\n", result2);

    // 7. strchr - Searches for the first occurrence of a character in a string.
    char* ptr = strchr(str3, 'C');
    printf("First occurrence of 'C': %s\n", ptr);

    // 8. strrchr - Finds the last occurrence of a character in a string.
    char* ptr2 = strrchr(str3, 'a');
    printf("Last occurrence of 'a': %s\n", ptr2);

    // 9. strstr - Searches for a substring in a string.
    char* ptr3 = strstr(str3, "Language");
    printf("Substring 'Language' found at: %s\n", ptr3);

    return 0;
}
