/* Program: Transpose Matrix
   Logic:
   1. Input rows and columns of matrix.
   2. Input matrix elements.
   3. Exchange rows and columns.
   4. Display the transpose matrix.
*/

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display transpose matrix
    printf("Transpose matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
