/*
Program: Find Second Largest Element in an Array

Logic:
1. Input array elements.
2. Find the largest and second largest elements.
3. Update values while traversing the array.
4. Display the second largest element.
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
    int secondLargest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest Element = %d", secondLargest);

    return 0;
}
