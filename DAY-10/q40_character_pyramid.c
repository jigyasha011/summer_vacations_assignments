/* Program: Character Pyramid
   Logic:
   1. Set the number of rows.
   2. Print spaces before characters.
   3. Print characters in increasing order.
   4. Print characters in decreasing order and move to next line.
*/

#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j;

    // Loop through each row
    for(i = 0; i < rows; i++)
    {
        // Print spaces
        for(j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        // Print increasing characters
        for(j = 0; j <= i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(j = i - 1; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
