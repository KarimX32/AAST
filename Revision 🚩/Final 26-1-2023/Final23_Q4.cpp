#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_GAMES 50

typedef struct {
    float minProcessorPower;
    int ram;
    char gameType[50];
    int price;
} Game;

int main() {
	float avgPrice = 0.0;
    Game games[NUM_GAMES];
    FILE* file;

    file = fopen("Games.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int i;
    for (i = 0; i < NUM_GAMES; i++) {
        if (fscanf(file, "%f %d %d %s", &games[i].minProcessorPower, &games[i].ram, &games[i].price, games[i].gameType) != 4) {
            break;
        }
    }

    fclose(file);

    printf("Games that can work on Processor 1.8 GHz and RAM 8 GB:\n");
    for (int j = 0; j < i; j++) {
        if (games[j].minProcessorPower <= 1.8 && games[j].ram <= 8) {
            printf("Processor: %.1f GHz, RAM: %d GB, Price: %d, Type: %s\n", games[j].minProcessorPower, games[j].ram, games[j].price, games[j].gameType);
        }
    }

	for (int j = 0; j < i; j++) {
		if (strcmp(games[j].gameType, "Strategy") == 0) {
			avgPrice += games[j].price;
		}
	}

	avgPrice /= i;

	printf("\nStrategy games with price above average (%.2f):\n", avgPrice);
	for (int j = 0; j < i; j++) {
		if (strcmp(games[j].gameType, "Strategy") == 0 && games[j].price > avgPrice) {
			printf("Processor: %.1f GHz, RAM: %d GB, Price: %d, Type: %s\n", games[j].minProcessorPower, games[j].ram, games[j].price, games[j].gameType);
		}
	}

    return 0;
}