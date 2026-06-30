/*
Program: Find First Repeating Character

Logic:
1. Read the string from the user.
2. Compare each character with the remaining characters.
3. Find the first character that repeats.
4. Display the first repeating character.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i, j;
    int found = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find first repeating character
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                printf("First repeating character: %c\n", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    // If no repeating character exists
    if (found == 0)
    {
        printf("No repeating character found.\n");
    }

    return 0;
}
