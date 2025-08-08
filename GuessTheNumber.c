#include <stdio.h>   // For input and output
#include <stdlib.h>  // For random number functions
#include <time.h>    // To use current time for randomness

int main() {
    int secretNumber;    // The number that the computer chooses
    int guess;           // The player's guess
    int attempts = 0;    // Count of how many tries the player made

    // Initialize random seed using current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("I picked a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    // Keep asking until the player guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Try a higher number.\n\n");
        } else if (guess > secretNumber) {
            printf("Try a lower number.\n\n");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
            break; // Exit the loop
        }
    }

    return 0;
}
