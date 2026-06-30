/*
Program: Find String Length without strlen()

Logic:
1. Read the string from the user.
2. Traverse the string character by character.
3. Count characters until the null character is found.
4. Display the length of the string.
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

    // Count characters
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    // Display the length
    printf("Length of the string = %d\n", length);

    return 0;
}
