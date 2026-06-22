/* Program: Union of Arrays
   Logic:
   1. Input elements of two arrays.
   2. Store all elements of first array.
   3. Add only unique elements from second array.
   4. Display the union array.
*/

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, i, j, size = 0, found;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        unionArr[size++] = arr1[i];
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Add unique elements from second array
    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < size; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[size++] = arr2[i];
        }
    }

    // Display union array
    printf("Union of arrays:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
