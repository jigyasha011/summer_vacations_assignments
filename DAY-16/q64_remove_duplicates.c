/* Program: Remove Duplicates from Array
   Logic:
   1. Input array elements from the user.
   2. Compare each element with remaining elements.
   3. Remove duplicate elements by shifting array.
   4. Display array after removing duplicates.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, k;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    // Display updated array
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
