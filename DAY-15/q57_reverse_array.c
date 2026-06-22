/* Program: Reverse Array
   Logic:
   1. Input array elements from the user.
   2. Store elements in the array.
   3. Traverse the array in reverse order.
   4. Display the reversed array.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display reversed array
    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
