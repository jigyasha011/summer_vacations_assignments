/* Program: Frequency of an Element
   Logic:
   1. Input array elements from the user.
   2. Input the element whose frequency is to be found.
   3. Traverse the array and count occurrences.
   4. Display the frequency count.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, key;
    int count = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to find frequency
    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    // Display result
    printf("Frequency of %d = %d\n", key, count);

    return 0;
}
