#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", isalnum(37));     // Checks if ASCII 37 ('%') is alphanumeric (A-Z, a-z, 0-9). Returns 0.
    printf("%d\n", isalpha(72));     // Checks if ASCII 72 ('H') is an alphabetic character. Returns non-zero.
    printf("%d\n", isdigit(55));     // Checks if ASCII 55 ('7') is a digit. Returns non-zero.
    printf("%d\n", islower(109));    // Checks if ASCII 109 ('m') is a lowercase letter. Returns non-zero.
    printf("%d\n", isupper(75));     // Checks if ASCII 75 ('K') is an uppercase letter. Returns non-zero.
    printf("%d\n", isspace(32));     // Checks if ASCII 32 (space) is a whitespace character. Returns non-zero.

    printf("%c\n", toupper('a'));    // Converts lowercase 'a' to uppercase 'A'.
    printf("%c\n", tolower('B'));    // Converts uppercase 'B' to lowercase 'b'.

    return 0;
}
