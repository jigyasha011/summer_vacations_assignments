/*
Program: Menu-Driven Array Operations System

Logic:
1. Read array elements from the user.
2. Display the menu for array operations.
3. Perform the selected operation.
4. Display the result.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int arr[100];
    int n, i;
    int choice;
    int sum = 0;
    int largest;

    // Read array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display menu
    printf("\n===== Array Operations =====\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Array Elements:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                sum = sum + arr[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 3:
            largest = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] > largest)
                {
                    largest = arr[i];
                }
            }

            printf("Largest Element = %d\n", largest);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
