/*
Program: Find Sum of Array Elements

Logic:
1. Input array size and elements.
2. Traverse the array.
3. Add all elements.
4. Display the sum.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
