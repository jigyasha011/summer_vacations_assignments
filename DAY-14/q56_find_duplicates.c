/* Program: Find Duplicates in Array
   Logic:
   1. Input array elements from the user.
   2. Compare each element with remaining elements.
   3. Identify duplicate elements.
   4. Display all duplicate elements.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int foundDuplicate = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find duplicate elements
    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
                break;
            }
        }
    }

    // Check if duplicates exist
    if(foundDuplicate == 0)
    {
        printf("No duplicate elements found\n");
    }

    return 0;
}
