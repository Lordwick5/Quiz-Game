#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 5  // Maximum number of players on the leaderboard

// Structure to store player's name and score
struct Player {
    char name[50];
    int score;
};

// Function to sort the leaderboard based on scores (bubble sort)
void sortLeaderboard(struct Player players[], int count) {
    struct Player temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (players[j].score < players[j + 1].score) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

// Function to display the leaderboard
void displayLeaderboard(struct Player players[], int count) {
    printf("\n--- Leaderboard ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %d points\n", i + 1, players[i].name, players[i].score);
    }
}

int main() {
    struct Player players[MAX_PLAYERS];  // Array to store players
    int currentPlayerCount = 0;  // Track the number of players
    char name[50];
    int answer, score;
    char playAgain = 'y';

    do {
        // Get player's name
        printf("Welcome to the Quiz Game!\n");
        printf("Please enter your name: ");
        scanf(" %[^\n]", name);  // Read player name (including spaces)

        // Start the quiz for the current player
        score = 0;  // Reset score for each player

        // Question 1
        printf("\n1. What is the capital of France?\n");
        printf("1) Berlin\n2) London\n3) Paris\n4) Madrid\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 3) score += 100;

        // Question 2
        printf("\n2. Which planet is known as the Red Planet?\n");
        printf("1) Earth\n2) Mars\n3) Jupiter\n4) Venus\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 2) score += 100;

        // Question 3
        printf("\n3. Who wrote 'Romeo and Juliet'?\n");
        printf("1) Charles Dickens\n2) J.K. Rowling\n3) William Shakespeare\n4) Mark Twain\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 3) score += 100;

        // Question 4
        printf("\n4. Which element is named after the Scandinavian god of thunder?\n");
        printf("1) Thorium\n2) Uranium\n3) Neptunium\n4) Plutonium\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 1) score += 100;

        // Question 5
        printf("\n5. What is the name of the theorem that states the sum of the angles in any triangle is 180 degrees?\n");
        printf("1) Pythagorean Theorem\n2) Triangle Sum Theorem\n3) Euler's Theorem\n4) Fermat's Last Theorem\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 2) score += 100;

        // Question 6
        printf("\n6. What is the longest river in the world by length, according to recent measurements?\n");
        printf("1) Amazon River\n2) Nile River\n3) Yangtze River\n4) Mississippi River\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 2) score += 100;

        // Question 7
        printf("\n7. Who wrote the epic poem 'Paradise Lost'?\n");
        printf("1) William Shakespeare\n2) John Milton\n3) Geoffrey Chaucer\n4) John Bunyan\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 2) score += 100;

        // Question 8
        printf("\n8. What is the name of the algorithm used for efficiently sorting large datasets in external memory?\n");
        printf("1) Quick Sort\n2) Merge Sort\n3) External Merge Sort\n4) Bubble Sort\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 3) score += 100;

        // Question 9
        printf("\n9. What is the primary function of ribosomes in a cell?\n");
        printf("1) Energy production\n2) Protein synthesis\n3) DNA replication\n4) Cell division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 2) score += 100;

        // Question 10
        printf("\n10. In the context of computer programming, what does the acronym 'OOP' stand for?\n");
        printf("1) Object-Oriented Programming\n2) Operational Output Protocol\n3) Original Operating Process\n4) Online Optimization Procedure\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer == 1) score += 100;

        // Store player's name and score in the leaderboard
        strcpy(players[currentPlayerCount].name, name);
        players[currentPlayerCount].score = score;
        currentPlayerCount++;

        // Sort the leaderboard by score
        sortLeaderboard(players, currentPlayerCount);

        // Display the leaderboard
        displayLeaderboard(players, currentPlayerCount);

        // Ask if the player wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' && currentPlayerCount < MAX_PLAYERS);

    // Final leaderboard after all players have played
    printf("\nFinal Leaderboard:\n");
    displayLeaderboard(players, currentPlayerCount);

    return 0;
}
