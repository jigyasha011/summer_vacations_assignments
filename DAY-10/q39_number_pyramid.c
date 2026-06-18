/* Program: Number Pyramid
   Logic:
   1. Set the number of rows.
   2. Print spaces before numbers.
   3. Print numbers in increasing order.
   4. Print numbers in decreasing order and move to next line.
*/

#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j;

    // Loop through each row
    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print increasing numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
