/* Program: Merge Arrays
   Logic:
   1. Input elements of two arrays.
   2. Copy first array elements into a new array.
   3. Copy second array elements after first array elements.
   4. Display the merged array.
*/

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input first array elements
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input second array elements
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Copy first array
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
