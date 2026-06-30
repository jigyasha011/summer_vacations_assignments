/*
Program: Check Symmetric Matrix

Logic:
1. Read the order of the square matrix.
2. Read all matrix elements.
3. Compare each element with its transpose position.
4. Print whether the matrix is symmetric or not.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int a[10][10];
    int n;
    int i, j;
    int symmetric = 1;

    // Read matrix order
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    // Read matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    // Display result
    if (symmetric == 1)
    {
        printf("Matrix is Symmetric.\n");
    }
    else
    {
        printf("Matrix is Not Symmetric.\n");
    }

    return 0;
}
