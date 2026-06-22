/* Program: Find Largest and Smallest Element
   Logic:
   1. Input array elements.
   2. Assume first element as largest and smallest.
   3. Compare remaining elements.
   4. Display largest and smallest values.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, smallest;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest element
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Display result
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
