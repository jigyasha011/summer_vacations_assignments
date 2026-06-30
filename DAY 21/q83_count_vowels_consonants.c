/*
Program: Count Vowels and Consonants

Logic:
1. Read the string from the user.
2. Check each character.
3. Count vowels and consonants separately.
4. Display the total number of vowels and consonants.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int i = 0;
    int vowels = 0;
    int consonants = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Process each character
    while (str[i] != '\0')
    {
        // Check if character is an alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            // Check for vowels
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    // Display result
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
