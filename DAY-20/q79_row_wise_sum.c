/*
Program: Find Row-wise Sum of Matrix

Logic:
1. Read rows and columns of the matrix.
2. Read matrix elements.
3. Find the sum of each row.
4. Display each row sum.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int a[10][10];
    int rows, cols;
    int i, j;
    int sum;

    // Read matrix size
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row-wise sum
    printf("Row-wise Sum:\n");
    for (i = 0; i < rows; i++)
    {
        sum = 0;

        for (j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}
