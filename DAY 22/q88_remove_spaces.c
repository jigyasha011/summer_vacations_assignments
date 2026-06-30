/*
Program: Remove Spaces from String

Logic:
1. Read the string from the user.
2. Traverse each character of the string.
3. Copy only non-space characters into a new position.
4. Display the string without spaces.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i = 0;
    int j = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Remove spaces
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    // Add null character at the end
    str[j] = '\0';

    // Display result
    printf("String without spaces: %s\n", str);

    return 0;
}
