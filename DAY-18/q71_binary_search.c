/* Program: Binary Search
   Logic:
   1. Input a sorted array from the user.
   2. Input the element to search.
   3. Compare the middle element with the target.
   4. Adjust search range until element is found or not found.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int low, high, mid;
    int found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Perform binary search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Display result
    if(found)
    {
        printf("Element found at position %d\n", mid + 1);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
