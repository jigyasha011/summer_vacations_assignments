/* Program: Rotate Array Right
   Logic:
   1. Input array elements from the user.
   2. Store the last element temporarily.
   3. Shift all elements one position to the right.
   4. Place the last element at the first position.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, last;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store last element
    last = arr[n - 1];

    // Shift elements right
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Place last element at first position
    arr[0] = last;

    // Display rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
