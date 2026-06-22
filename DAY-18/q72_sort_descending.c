/* Program: Sort Array in Descending Order
   Logic:
   1. Input array elements from the user.
   2. Compare array elements.
   3. Swap elements when required.
   4. Display the array in descending order.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("Array in descending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
