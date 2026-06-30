/*
Program: Salary Management System

Logic:
1. Read employee name, basic salary, and bonus.
2. Calculate the total salary.
3. Display all salary details.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char employeeName[50];
    float basicSalary;
    float bonus;
    float totalSalary;

    // Read employee details
    printf("Enter Employee Name: ");
    scanf("%s", employeeName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    // Calculate total salary
    totalSalary = basicSalary + bonus;

    // Display salary details
    printf("\n----- Salary Details -----\n");
    printf("Employee Name : %s\n", employeeName);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("Bonus         : %.2f\n", bonus);
    printf("Total Salary  : %.2f\n", totalSalary);

    return 0;
}
