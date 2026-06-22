/* Program: Linear Search
   Logic:
   1. Input array elements from the user.
   2. Input the element to search.
   3. Traverse the array one by one.
   4. Display the position if found, otherwise display not found.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Perform linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    // Check if element was found
    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
