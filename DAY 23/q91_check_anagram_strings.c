/*
Program: Check Anagram Strings

Logic:
1. Read two strings from the user.
2. Find the length of both strings.
3. Count the frequency of each character.
4. Compare the frequencies and display whether the strings are anagrams.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i = 0;
    int length1 = 0;
    int length2 = 0;
    int anagram = 1;

    // Read first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Read second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths
    while (str1[length1] != '\0')
    {
        length1++;
    }

    while (str2[length2] != '\0')
    {
        length2++;
    }

    // Check length
    if (length1 != length2)
    {
        anagram = 0;
    }
    else
    {
        // Count characters
        for (i = 0; str1[i] != '\0'; i++)
        {
            count1[(int)str1[i]]++;
        }

        for (i = 0; str2[i] != '\0'; i++)
        {
            count2[(int)str2[i]]++;
        }

        // Compare frequencies
        for (i = 0; i < 256; i++)
        {
            if (count1[i] != count2[i])
            {
                anagram = 0;
                break;
            }
        }
    }

    // Display result
    if (anagram == 1)
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are not anagrams.\n");
    }

    return 0;
}
