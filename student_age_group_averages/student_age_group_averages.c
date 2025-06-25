#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int studentCount, count = 1, studentAge;
    int totalAge1621 = 0, totalAge2428 = 0, c1621 = 0, c2428 = 0;
    float avg1, avg2;

    printf("How many students are there? : ");
    scanf("%d", &studentCount);

    while (count <= studentCount)
    {
        printf("Enter the age of student %d: ", count);
        scanf("%d", &studentAge);

        if (studentAge > 27 || studentAge < 1)
        {
            printf("Invalid entry. Age must be between 16 and 28.\n");
            continue;
        }

        if (studentAge < 28 && studentAge > 24)
        {
            totalAge2428 = totalAge2428 + studentAge;
            c2428++;
        }

        if (studentAge < 21 && studentAge > 16)
        {
            totalAge1621 = totalAge1621 + studentAge;
            c1621++;
        }

        count++;
    }

    avg1 = totalAge1621 / (float)c1621;
    avg2 = totalAge2428 / (float)c2428;

    printf("Average age of students aged 16-21: %.2f\n", avg1);
    printf("Average age of students aged 24-28: %.2f\n", avg2);

    printf("Program Finished\n\n");

    return 0;
}
