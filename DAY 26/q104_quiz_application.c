/*
Program: Quiz Application

Logic:
1. Display multiple-choice questions.
2. Read the user's answers.
3. Compare answers with the correct answers.
4. Display the final score.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int answer;
    int score = 0;

    // Question 1
    printf("Question 1: What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Chennai\n");
    printf("4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        score++;
    }

    // Question 2
    printf("\nQuestion 2: How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }

    // Question 3
    printf("\nQuestion 3: Which language is used for C programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        score++;
    }

    // Display final score
    printf("\nYour Score = %d out of 3\n", score);

    return 0;
}
