/*
Program: Sort Words by Length

Logic:
1. Read the number of words.
2. Read all words into an array.
3. Compare the length of each word and swap if required.
4. Display the words sorted by length.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare variables
    char word[20][50], temp[50];
    int n;
    int i, j;

    // Read number of words
    printf("Enter number of words: ");
    scanf("%d", &n);

    // Read words
    printf("Enter words:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    // Sort words by length
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Display sorted words
    printf("Words sorted by length:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}
