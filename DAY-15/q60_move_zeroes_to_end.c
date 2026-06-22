/* Program: Move Zeroes to End
   Logic:
   1. Input array elements from the user.
   2. Move all non-zero elements to the beginning.
   3. Fill remaining positions with zeroes.
   4. Display the updated array.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, position = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to front
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill remaining positions with zeroes
    while(position < n)
    {
        arr[position] = 0;
        position++;
    }

    // Display updated array
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
