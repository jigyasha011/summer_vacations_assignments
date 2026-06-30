/*
Program: Find Maximum Occurring Character

Logic:
1. Read the string from the user.
2. Count the frequency of each character.
3. Find the character with the highest frequency.
4. Display the character and its count.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[100];
    int frequency[256] = {0};
    int i;
    int max = 0;
    char maxChar;

    // Read the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        frequency[(int)str[i]]++;
    }

    // Find maximum occurring character
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            maxChar = (char)i;
        }
    }

    // Display result
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}
