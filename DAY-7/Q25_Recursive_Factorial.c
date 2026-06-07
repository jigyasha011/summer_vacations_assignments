/*
Program: Find Factorial Using Recursion

Logic:
1. Take a number as input.
2. If the number is 0 or 1, return 1.
3. Otherwise return n × factorial(n-1).
4. Display the result.
*/

#include <stdio.h>

// Recursive function to find factorial
long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Display factorial
    printf("Factorial = %lld", factorial(n));

    return 0;
}
