/*
Program: Character Frequency

Logic:
1. Read the string from the user.
2. Read the character to be searched.
3. Compare each character with the given character.
4. Display the frequency of the character.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    char ch;
    int i = 0;
    int count = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Read the character
    printf("Enter the character to find frequency: ");
    scanf(" %c", &ch);

    // Count frequency
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    // Display result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
