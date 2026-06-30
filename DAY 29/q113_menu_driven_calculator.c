/*
Program: Menu-Driven Calculator

Logic:
1. Display the calculator menu.
2. Read the user's choice and two numbers.
3. Perform the selected arithmetic operation.
4. Display the result or an error message.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int choice;
    float num1, num2, result;

    // Display menu
    printf("===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Read user choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Read two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform selected operation
    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
