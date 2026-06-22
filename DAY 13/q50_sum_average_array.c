/* Program: Find Sum and Average of Array
   Logic:
   1. Declare an array and required variables.
   2. Input array elements.
   3. Calculate sum of all elements.
   4. Find and display average.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, sum = 0;
    float average;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // Add element to sum
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
