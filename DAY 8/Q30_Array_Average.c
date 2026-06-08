/*
Program: Find Average of Array Elements

Logic:
1. Input array size and elements.
2. Find the sum of all elements.
3. Divide sum by number of elements.
4. Display average.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}
