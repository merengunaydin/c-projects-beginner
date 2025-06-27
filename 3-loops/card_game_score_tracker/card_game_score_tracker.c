#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char mars;
    int round = 0, player1 = 0, player2 = 0, point = 0, winner = 0, winnerFlag = 0;

    do {
        printf("Enter the winner of round %d (1 or 2): ", round);
        scanf("%d", &winner);

        if (winner != 1 && winner != 2) {
            printf("Invalid input. Only player 1 or 2 can win a round.\n");
            continue;
        }

        printf("Did the winner make a mars? (y/n): ");
        scanf(" %c", &mars);

        if (mars == 'y' || mars == 'Y') {
            point = 2;
        }
        else if (mars == 'n' || mars == 'N') {
            point = 1;
        }
        else {
            printf("Invalid input for mars. Enter 'y' or 'n'.\n");
            continue;
        }

        if (winner == 1) {
            player1 += point;
            winnerFlag = 1;
        }
        else {
            player2 += point;
            winnerFlag = 2;
        }

        round++;
        printf("Current score: Player 1 - %d | Player 2 - %d\n", player1, player2);

    } while (player1 < 5 && player2 < 5);

    printf("Game over in %d rounds.\n", round);
    printf("The winner is Player %d.\n\n", winnerFlag);

    return 0;
}
