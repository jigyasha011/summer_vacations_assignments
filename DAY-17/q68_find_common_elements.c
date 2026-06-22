/* Program: Find Common Elements
   Logic:
   1. Input elements of two arrays.
   2. Compare elements of both arrays.
   3. Identify matching elements.
   4. Display all common elements.
*/

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2, i, j, found = 0;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    printf("Common elements are:\n");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
    {
        printf("No common elements found");
    }

    return 0;
}
