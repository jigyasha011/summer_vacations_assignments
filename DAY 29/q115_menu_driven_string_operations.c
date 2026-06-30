/*
Program: Menu-Driven String Operations System

Logic:
1. Read a string from the user.
2. Display the menu of string operations.
3. Perform the selected operation.
4. Display the result.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int choice;
    int i = 0;
    int length = 0;

    // Read string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Display menu
    printf("\n===== String Operations =====\n");
    printf("1. Find Length\n");
    printf("2. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            while (str[length] != '\0')
            {
                length++;
            }

            printf("Length = %d\n", length);
            break;

        case 2:
            while (str[i] != '\0')
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }

                i++;
            }

            printf("Uppercase String = %s\n", str);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
