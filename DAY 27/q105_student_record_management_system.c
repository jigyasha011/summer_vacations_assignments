/*
Program: Student Record Management System

Logic:
1. Read student details such as roll number, name, and marks.
2. Store the details in variables.
3. Display all the entered student information.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int rollNo;
    char name[50];
    float marks;

    // Read student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student details
    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Student Name: %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}
