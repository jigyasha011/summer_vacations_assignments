/* Program: Reverse Pyramid
   Logic:
   1. Set the number of rows.
   2. Print leading spaces for alignment.
   3. Print decreasing odd number of stars.
   4. Move to the next line after each row.
*/

#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j;

    // Loop through each row
    for(i = rows; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
