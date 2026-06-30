/*
Program: Mini Project System (Student Management Using Functions)

Logic:
1. Use functions to add and display student records.
2. Store data using arrays and strings.
3. Call functions from main menu.
4. Demonstrate modular programming approach.
*/

#include <stdio.h>

// Function to input student data
void inputData(int roll[], char name[][50], float marks[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}

// Function to display student data
void displayData(int roll[], char name[][50], float marks[], int n)
{
    int i;

    printf("\n----- Student Data -----\n");

    for (i = 0; i < n; i++)
    {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", roll[i], name[i], marks[i]);
    }
}

int main()
{
    // Declare variables
    int roll[50];
    char name[50][50];
    float marks[50];
    int n;

    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Call functions
    inputData(roll, name, marks, n);
    displayData(roll, name, marks, n);

    return 0;
}
