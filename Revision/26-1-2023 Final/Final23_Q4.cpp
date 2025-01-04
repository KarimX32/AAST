#include <stdio.h>
#include <stdlib.h>

#define NUM_GAMES 3

typedef struct {
    float minProcessorPower;
    int ram;
    char gameType[50];
} Game;

int main() {
    Game games[NUM_GAMES];
    FILE* file;
    int i;

    file = fopen("Games.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < NUM_GAMES; i++) {
        fscanf(file, "%f %d %s", &games[i].minProcessorPower, &games[i].ram, games[i].gameType);
    }

    fclose(file);

    printf("Games that can work on Processor 1.8 GHz and RAM 8 GB:\n");
    for (i = 0; i < NUM_GAMES; i++) {
        if (games[i].minProcessorPower <= 1.8 && games[i].ram <= 8) {
            printf("Processor: %.1f GHz, RAM: %d GB, Type: %s\n", games[i].minProcessorPower, games[i].ram, games[i].gameType);
        }
    }

    return 0;
}