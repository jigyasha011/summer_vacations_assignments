/*
Program: Find Column-wise Sum of Matrix

Logic:
1. Read rows and columns of the matrix.
2. Read matrix elements.
3. Find the sum of each column.
4. Display each column sum.
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

    // Calculate column-wise sum
    printf("Column-wise Sum:\n");
    for (j = 0; j < cols; j++)
    {
        sum = 0;

        for (i = 0; i < rows; i++)
        {
            sum = sum + a[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}
