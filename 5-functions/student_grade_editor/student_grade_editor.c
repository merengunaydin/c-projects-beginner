#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 50

int updateGrade(int studentIds[], int targetId, int grades[], int newGrade);

int main()
{
    int studentIds[N];
    int grades[N];
    int i, id, grade, foundIndex;
    char choice;

    srand(time(NULL));

    for (i = 0; i < N; i++)
        studentIds[i] = rand() % 1000;

    for (i = 0; i < N; i++)
        grades[i] = rand() % 101;

    do {
        printf("\nChange student grade (Y / y)\n");
        printf("Show all student grades (S / s)\n");
        printf("Exit program (N / n)\n");
        printf("Your choice: ");
        scanf(" %c", &choice);
        while (getchar() != '\n');

        if (choice != 'y' && choice != 'Y' && choice != 's' && choice != 'S' && choice != 'n' && choice != 'N') {
            printf("\nInvalid selection. Please try again.\n");
            continue;
        }

        switch (choice) {
        case 'y':
        case 'Y':
            printf("\nEnter student ID to update and the new grade: ");
            if (scanf("%d%d", &id, &grade) != 2 || grade < 0 || grade > 100) {
                printf("Invalid input. Grade must be between 0 and 100.\n");
                while (getchar() != '\n');
                break;
            }

            foundIndex = updateGrade(studentIds, id, grades, grade);
            if (foundIndex == -1) {
                printf("\nStudent ID not found.\n");
            }
            else {
                grades[foundIndex] = grade;
                printf("\nNew grade for student %d: %d\n", id, grade);
            }
            break;

        case 's':
        case 'S':
            for (i = 0; i < N; i++)
                printf("Student ID: %d | Grade: %d\n", studentIds[i], grades[i]);
            break;
        }

        printf("\n");

    } while (choice != 'n' && choice != 'N');

    printf("Program terminated. Goodbye!\n");

    return 0;
}

int updateGrade(int studentIds[], int targetId, int grades[], int newGrade)
{
    for (int i = 0; i < N; i++) {
        if (studentIds[i] == targetId)
            return i;
    }
    return -1;
}