/* 
Program: Matrix Multiplication

Logic:
1. Read the number of rows and columns of both matrices.
2. Check if multiplication is possible.
3. Multiply the matrices using nested loops.
4. Display the resultant matrix.
*/

#include <stdio.h>

int main()
{
    // Declare matrices and variables
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Read first matrix size
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Read second matrix size
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Read first matrix
    printf("Enter first matrix elements:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    printf("Enter second matrix elements:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
