/* Program: Selection Sort
   Logic:
   1. Input array elements from the user.
   2. Find the smallest element in the unsorted part.
   3. Swap it with the current position.
   4. Repeat until the array is sorted.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, minIndex, temp;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Perform selection sort
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap elements
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Display sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
