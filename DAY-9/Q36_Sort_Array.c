/*
Program: Sort Array in Ascending Order

Logic:
1. Input array elements.
2. Compare each element with others.
3. Swap elements when required.
4. Display the sorted array.
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
