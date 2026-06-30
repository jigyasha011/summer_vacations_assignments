/*
Program: Find First Non-Repeating Character

Logic:
1. Read the string from the user.
2. Compare each character with all other characters.
3. Find the first character whose frequency is one.
4. Display the first non-repeating character.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i, j;
    int count;
    int found = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find first non-repeating character
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    // If no non-repeating character exists
    if (found == 0)
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
