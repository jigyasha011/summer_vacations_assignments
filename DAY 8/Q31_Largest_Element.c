/*
Program: Find Largest Element in an Array

Logic:
1. Input array elements.
2. Assume first element is largest.
3. Compare with remaining elements.
4. Update largest when needed.
5. Display result.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest Element = %d", largest);

    return 0;
}
