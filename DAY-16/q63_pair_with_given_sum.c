/* Program: Find Pair with Given Sum
   Logic:
   1. Input array elements from the user.
   2. Input the target sum.
   3. Compare all possible pairs of elements.
   4. Display pairs whose sum matches the target.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, sum;
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

    // Input target sum
    printf("Enter target sum: ");
    scanf("%d", &sum);

    // Find pairs
    printf("Pairs with given sum:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // Check if pair exists
    if(found == 0)
    {
        printf("No pair found\n");
    }

    return 0;
}
