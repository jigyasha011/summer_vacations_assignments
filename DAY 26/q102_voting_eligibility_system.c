/*
Program: Voting Eligibility System

Logic:
1. Read the age of the user.
2. Check whether the age is at least 18.
3. Display whether the user is eligible to vote.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variable
    int age;

    // Read age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
