/*
Program: Convert Lowercase to Uppercase

Logic:
1. Read the string from the user.
2. Check each character of the string.
3. Convert lowercase letters to uppercase.
4. Display the updated string.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Convert lowercase letters to uppercase
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Display converted string
    printf("Uppercase string: %s\n", str);

    return 0;
}
