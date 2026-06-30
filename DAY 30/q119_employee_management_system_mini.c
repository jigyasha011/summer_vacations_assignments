/*
Program: Mini Employee Management System

Logic:
1. Store employee details using arrays and strings.
2. Read employee ID, name, and salary.
3. Display all employee records.
4. Use loops for multiple employees.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int empId[50];
    char name[50][50];
    float salary[50];
    int n;
    int i;

    // Read number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Read employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n----- Employee Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Salary: %.2f\n", empId[i], name[i], salary[i]);
    }

    return 0;
}
