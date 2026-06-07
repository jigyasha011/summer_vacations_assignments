/*
Program: Print Fibonacci Series Using Recursion

Logic:
1. Take the number of terms as input.
2. Define a recursive function:
   Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
3. Base cases:
   Fibonacci(0) = 0
   Fibonacci(1) = 1
4. Print the series using the recursive function.
*/

#include <stdio.h>

// Recursive function to find Fibonacci number
int fibonacci(int n) {
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    // Print Fibonacci series
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
