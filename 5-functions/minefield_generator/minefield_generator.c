#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10
#define MINE_COUNT 60

void placeMines(int grid[ROW][COL]);

int main()
{
    int grid[ROW][COL] = { 0 };

    placeMines(grid);

    return 0;
}

void placeMines(int grid[ROW][COL])
{
    int i, row, col;

    if (MINE_COUNT > ROW * COL) {
        printf("Too many mines for the grid!\n");
        return;
    }

    srand(time(NULL));

    for (i = 0; i < MINE_COUNT; i++)
    {
        row = rand() % ROW;
        col = rand() % COL;

        if (grid[row][col] == 1)
        {
            i--;
            continue;
        }

        grid[row][col] = 1;
    }

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", grid[row][col]);
        }
        printf("\n");
    }
}
