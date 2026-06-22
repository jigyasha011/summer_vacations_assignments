/* Program: Find Maximum Frequency Element
   Logic:
   1. Input array elements from the user.
   2. Count frequency of each element.
   3. Track the element with highest frequency.
   4. Display the maximum frequency element.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int maxFreq = 0, freq, element;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find maximum frequency element
    for(i = 0; i < n; i++)
    {
        freq = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }

        if(freq > maxFreq)
        {
            maxFreq = freq;
            element = arr[i];
        }
    }

    // Display result
    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
