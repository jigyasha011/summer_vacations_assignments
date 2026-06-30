/*
Program: Find Common Characters in Strings

Logic:
1. Read two strings from the user.
2. Compare every character of the first string with the second.
3. Print the common characters only once.
4. Display all common characters.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str1[100], str2[100];
    int i, j;
    int printed[256] = {0};

    // Read first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Read second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find common characters
    printf("Common characters: ");

    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j] && printed[(int)str1[i]] == 0)
            {
                printf("%c ", str1[i]);
                printed[(int)str1[i]] = 1;
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
