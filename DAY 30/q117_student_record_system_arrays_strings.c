/*
Program: Student Record System Using Arrays and Strings

Logic:
1. Read number of students.
2. Store roll numbers, names, and marks using arrays.
3. Display all student records.
4. Use arrays and strings to manage multiple records.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int roll[50];
    char name[50][50];
    float marks[50];
    int n;
    int i;

    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Read student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
