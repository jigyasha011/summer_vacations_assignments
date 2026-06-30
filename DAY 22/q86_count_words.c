/*
Program: Count Words in a Sentence

Logic:
1. Read the sentence from the user.
2. Count the spaces between words.
3. Add one to get the total number of words.
4. Display the word count.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    char str[200];
    int i = 0;
    int words = 1;

    // Read the sentence
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    // Count words
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            words++;
        }

        i++;
    }

    // Display result
    printf("Number of words = %d\n", words);

    return 0;
}
