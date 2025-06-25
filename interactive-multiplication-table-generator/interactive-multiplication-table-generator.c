#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int start, end;
    char choice;

    do {
        // Prompt the user for input
        printf("Enter the start and end values to generate a multiplication table:\n");

        // Validate input values
        do {
            printf("Start: ");
            if (scanf("%d", &start) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("End: ");
            if (scanf("%d", &end) != 1) {
                printf("Invalid input. Please enter an integer.\n");
                while (getchar() != '\n');
                continue;
            }

            if (start > end) {
                printf("Start value cannot be greater than end value. Please try again.\n");
            }
        } while (start > end);

        // Print header
        printf("\nMultiplication Table (%d to %d):\n\n", start, end);

        // Print column headers
        printf("    ");
        for (int i = start; i <= end; i++) {
            printf("%4d", i);
        }
        printf("\n");

        // Print separator line
        printf("   |");
        for (int i = start; i <= end; i++) {
            printf("----");
        }
        printf("\n");

        // Print multiplication rows
        for (int i = start; i <= end; i++) {
            printf("%2d |", i);
            for (int j = start; j <= end; j++) {
                printf("%4d", i * j);
            }
            printf("\n");
        }

        // Ask if the user wants to repeat
        printf("\nDo you want to generate another table? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n');

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated. Have a nice day!\n");
    return 0;
}
