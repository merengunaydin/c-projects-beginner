#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortArray();

int array[7];
int i;

int main()
{
    printf("Please enter seven numbers: ");

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
    }

    sortArray();

    return 0;
}

void sortArray()
{
    int temp, j;
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (i = 0; i < 7; i++)
        printf("%d ", array[i]);
}
