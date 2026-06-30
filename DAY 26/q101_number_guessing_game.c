/*
Program: Number Guessing Game

Logic:
1. Store a secret number.
2. Read the user's guessed number.
3. Compare the guess with the secret number.
4. Display whether the guess is correct, too high, or too low.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int secretNumber = 25;
    int guess;

    // Read user's guess
    printf("Guess the number (1 to 50): ");
    scanf("%d", &guess);

    // Compare the guess with the secret number
    if (guess == secretNumber)
    {
        printf("Congratulations! You guessed the correct number.\n");
    }
    else if (guess > secretNumber)
    {
        printf("Your guess is too high.\n");
    }
    else
    {
        printf("Your guess is too low.\n");
    }

    return 0;
}
