/* Program: Second Largest Element
   Logic:
   1. Input array elements from the user.
   2. Assume first element as largest and second largest.
   3. Compare all elements and update values.
   4. Display the second largest element.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, secondLargest;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = secondLargest = -2147483648;

    // Find largest and second largest
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display result
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
