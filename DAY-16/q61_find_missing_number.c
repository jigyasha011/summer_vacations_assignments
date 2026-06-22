/* Program: Find Missing Number in Array
   Logic:
   1. Input n-1 elements of an array containing numbers from 1 to n.
   2. Calculate expected sum of numbers from 1 to n.
   3. Calculate actual sum of array elements.
   4. Find and display the missing number.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int expectedSum, actualSum = 0, missingNumber;

    // Input value of n
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Input n-1 elements
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        actualSum = actualSum + arr[i];
    }

    // Calculate expected sum
    expectedSum = n * (n + 1) / 2;

    // Find missing number
    missingNumber = expectedSum - actualSum;

    // Display result
    printf("Missing number = %d\n", missingNumber);

    return 0;
}
