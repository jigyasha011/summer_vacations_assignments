/*
Program: Check Palindrome String

Logic:
1. Read the string from the user.
2. Find the length of the string.
3. Compare characters from the beginning and end.
4. Display whether the string is a palindrome or not.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int length = 0;
    int i;
    int palindrome = 1;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    // Display result
    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
