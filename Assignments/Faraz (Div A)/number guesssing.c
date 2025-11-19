#include <stdio.h>

int main() {

    printf("Aim: Number Guessing Game using if-else in C\n\n");
    printf("Full Name\t: Mohammad Faraz\n");
    printf("Roll No.\t: 251749\n");
    printf("Division\t: A\n");
    printf("Batch\t\t: A3\n");
    printf("Branch\t\t: AIML\n");
    printf("Subject\t\t: C Programming\n\n");

    int secret = 50;
    int guess;

    printf("Number Guessing Game\n");
    printf("Guess a number: ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("Correct! You win.\n");
    }
    else if (guess > secret) {
        printf("Too High! Try again.\n");
    }
    else {
        printf("Too Low! Try again.\n");
    }

    return 0;
}