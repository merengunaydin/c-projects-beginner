#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[50][50];
    int i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j || (i + j) == (cols - 1)) {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }

    printf("Generated matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
