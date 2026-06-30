/*
Program: Reverse a String

Logic:
1. Read the string from the user.
2. Find the length of the string.
3. Print characters from the last position to the first.
4. Display the reversed string.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i = 0;
    int length = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find string length
    while (str[length] != '\0')
    {
        length++;
    }

    // Print reversed string
    printf("Reversed string: ");

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
