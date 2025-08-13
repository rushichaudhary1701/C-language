#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ===== Star Pattern Reward =====
void printRewardPattern() {
    printf("\n🏆 Congratulations! Here's your reward:\n\n");
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// ===== Basic Version =====
void basicGame() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("\n[Basic Mode] Guess the number between 1 and 100!\n");

    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
            printf("Too high!\n");
        else if (guess < number)
            printf("Too low!\n");
        else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            printRewardPattern();
        }
    } while (guess != number);
}

// ===== Multi-Level Version =====
int playLevelGame(int maxNumber, int maxAttempts) {
    int number, guess, attempts = 0;

    srand(time(0) + rand());
    number = rand() % maxNumber + 1;

    printf("\nGuess a number between 1 and %d. You have %d attempts.\n", maxNumber, maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
            printf("Too high! Attempts left: %d\n", maxAttempts - attempts);
        else if (guess < number)
            printf("Too low! Attempts left: %d\n", maxAttempts - attempts);
        else {
            printf("You guessed it in %d attempts!\n", attempts);
            printRewardPattern();
            return 1;
        }
    }
    printf("Out of attempts! Number was %d.\n", number);
    return 0;
}

void multiLevelGame() {
    int choice, score = 0;

    printf("\n[Multi-Level Mode]\nChoose difficulty:\n1. Easy (1-10, 5 tries)\n2. Medium (1-50, 7 tries)\n3. Hard (1-100, 10 tries)\n");
    scanf("%d", &choice);

    if (choice == 1) score += playLevelGame(10, 5);
    else if (choice == 2) score += playLevelGame(50, 7);
    else if (choice == 3) score += playLevelGame(100, 10);
    else { printf("Invalid choice!\n"); return; }

    printf("Your score: %d\n", score);
}

// ===== Mega Arcade Version =====
void megaArcadeGame() {
    int choice, rounds, score = 0;

    printf("\n[Mega Arcade Mode]\nSelect difficulty:\n1. Easy (1-10, 5 tries)\n2. Medium (1-50, 7 tries)\n3. Hard (1-100, 10 tries)\nChoice: ");
    scanf("%d", &choice);

    printf("How many rounds? ");
    scanf("%d", &rounds);

    for (int i = 1; i <= rounds; i++) {
        printf("\n=== ROUND %d ===\n", i);
        if (choice == 1) score += playLevelGame(10, 5);
        else if (choice == 2) score += playLevelGame(50, 7);
        else if (choice == 3) score += playLevelGame(100, 10);
        else { printf("Invalid choice!\n"); return; }
    }

    printf("\n🎉 Final Score: %d/%d rounds won!\n", score, rounds);
}

// ===== Main Menu =====
int main() {
    int mode;

    printf("==== 🕹 GUESS THE NUMBER GAME PACK ====\n");
    printf("Select mode:\n1. Basic Game\n2. Multi-Level Game\n3. Mega Arcade Game\nChoice: ");
    scanf("%d", &mode);

    if (mode == 1) basicGame();
    else if (mode == 2) multiLevelGame();
    else if (mode == 3) megaArcadeGame();
    else printf("Invalid selection!\n");

    printf("\nThanks for playing! 😎\n");
    return 0;
}
