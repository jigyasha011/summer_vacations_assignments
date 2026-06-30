/*
Program: Marksheet Generation System

Logic:
1. Read student name and marks of five subjects.
2. Calculate total marks and percentage.
3. Determine the grade based on percentage.
4. Display the complete marksheet.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char studentName[50];
    float mark1, mark2, mark3, mark4, mark5;
    float total, percentage;
    char grade;

    // Read student details
    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("Enter marks of Subject 1: ");
    scanf("%f", &mark1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &mark2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &mark3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &mark4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &mark5);

    // Calculate total and percentage
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = total / 5;

    // Determine grade
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 75)
    {
        grade = 'B';
    }
    else if (percentage >= 60)
    {
        grade = 'C';
    }
    else if (percentage >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display marksheet
    printf("\n----- Marksheet -----\n");
    printf("Student Name : %s\n", studentName);
    printf("Total Marks  : %.2f\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    return 0;
}
