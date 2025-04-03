#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int satir, sutun;
    int matrix[50][50];
    int i, j;

    printf("Satir ve sutun sayisini giriniz: ");
    scanf("%d%d", &satir, &sutun);

    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            if (i == j || (i + j) == (sutun - 1)) {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }

    printf("Olusan matris:\n");
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
