/* Program: Intersection of Arrays
   Logic:
   1. Input elements of two arrays.
   2. Compare each element of first array with second array.
   3. Find common elements.
   4. Display the intersection array.
*/

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2, i, j;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Display intersection
    printf("Intersection elements:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}
