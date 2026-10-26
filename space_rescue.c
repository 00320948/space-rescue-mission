
#include <stdio.h>

// Function prototypes
int attack(int health);
int repair(int shields);
void status(int shields, int health, int kits);
void game(int shields, int health, int kits);
double calculateScore(int health, int shields);
int main() {
    int shields = 50;
    int health = 40;
    int kits = 2;

    printf("Space Rescue Mission!\n");
    game(shields, health, kits);

    return 0;
}

int attack(int health) {
    return health - 20;
}

int repair(int shields) {
    return shields + 20;
}

void status(int shields, int health, int kits) {
    printf("\nShields: %d\n", shields);
    printf("Enemy health: %d\n", health);
    printf("Repair kits: %d\n", kits);
}

void game(int shields, int health, int kits) {
    char choice;

    if (health <= 0) {
        printf("You win!\n");
        return;
    } else if (shields <= 0) {
        printf("You lose!\n");
        return;
    }

    status(shields, health, kits);

    printf("A = Attack, R = Repair: ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a') {
        health = attack(health);
    } else if (choice == 'R' || choice == 'r') {
        if (kits > 0) {
            shields = repair(shields);
            kits = kits - 1;

            if (shields > 50) {
                shields = 50;
            }
        } else {
            printf("No repair kits left!\n");
        }
    }

    if (health > 0) {
        shields = shields - 10;
        printf("The drone attacks!\n");
    }

    game(shields, health, kits);
    double calculateScore(int health, int shields) {
        return health + shields;
}
