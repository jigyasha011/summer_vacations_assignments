/*
Program: Employee Management System

Logic:
1. Read employee ID, name, and salary.
2. Store the details in variables.
3. Display the employee information.
4. End the program.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int employeeId;
    char employeeName[50];
    float salary;

    // Read employee details
    printf("Enter Employee ID: ");
    scanf("%d", &employeeId);

    printf("Enter Employee Name: ");
    scanf("%s", employeeName);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Display employee details
    printf("\n----- Employee Details -----\n");
    printf("Employee ID   : %d\n", employeeId);
    printf("Employee Name : %s\n", employeeName);
    printf("Salary        : %.2f\n", salary);

    return 0;
}
