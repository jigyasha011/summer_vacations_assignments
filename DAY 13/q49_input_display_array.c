/* Program: Input and Display Array
   Logic:
   1. Declare an array and size variable.
   2. Input elements from the user.
   3. Store elements in the array.
   4. Display all array elements.
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

    // Display array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
