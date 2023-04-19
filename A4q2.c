#include <stdio.h>

#define MAX_PLAYERS 11

struct Player {
    char name[50];
    int runs;
};

int main() {
    struct Player players[MAX_PLAYERS];
    int numPlayers, i, totalRuns = 0;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    printf("Enter the batting information:\n");
    for (i = 0; i < numPlayers; i++) {
        printf("Player %d\n", i+1);
        printf("Name: ");
        scanf("%s", players[i].name);

        printf("Runs: ");
        scanf("%d", &players[i].runs);

        totalRuns += players[i].runs;
    }

    printf("\nTotal runs scored by the team: %d\n", totalRuns);

    return 0;
}
