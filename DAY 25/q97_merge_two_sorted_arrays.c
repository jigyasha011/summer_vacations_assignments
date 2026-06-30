/*
Program: Merge Two Sorted Arrays

Logic:
1. Read the size and elements of two sorted arrays.
2. Compare elements from both arrays one by one.
3. Store the smaller element into the merged array.
4. Copy remaining elements and display the merged sorted array.
*/

#include <stdio.h>

int main()
{
    // Declare arrays and variables
    int a[50], b[50], c[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    // Read size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    // Read first array elements
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Read size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    // Read second array elements
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge both arrays
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Display merged array
    printf("Merged Sorted Array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}
