/*
Program: Reverse a Number Using Recursion

Logic:
1. Take a number as input.
2. Extract the last digit using n % 10.
3. Build the reversed number recursively.
4. Base case: when the number becomes 0.
5. Display the reversed number.
*/

#include <stdio.h>

int reverse = 0;

// Recursive function to reverse a number
void reverseNumber(int n) {
    if(n == 0)
        return;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int n;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse the number
    reverseNumber(n);

    // Display reversed number
    printf("Reversed number = %d", reverse);

    return 0;
}
